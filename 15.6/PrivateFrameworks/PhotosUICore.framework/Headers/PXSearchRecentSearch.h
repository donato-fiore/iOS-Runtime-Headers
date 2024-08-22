// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHRECENTSEARCH_H
#define PXSEARCHRECENTSEARCH_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PXSearchRecentSearch : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *representedObjects; // ivar: _representedObjects
@property (readonly, nonatomic) NSString *searchText; // ivar: _searchText
@property (readonly, nonatomic) NSString *title;


+(BOOL)_isSupportedRepresentedObjects:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryForArchiving;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithRepresentedObjects:(id)arg0 searchText:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif