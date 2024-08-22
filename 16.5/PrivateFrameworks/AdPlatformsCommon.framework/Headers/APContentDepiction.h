// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APCONTENTDEPICTION_H
#define APCONTENTDEPICTION_H

@class NSArray, NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface APContentDepiction : NSObject <NSSecureCoding>



@property NSUInteger adjacency; // ivar: _adjacency
@property (retain) NSArray *categories; // ivar: _categories
@property (retain) NSUUID *identifier; // ivar: _identifier
@property (retain) NSArray *keywords; // ivar: _keywords
@property (retain) NSString *language; // ivar: _language
@property (retain) NSString *locale; // ivar: _locale
@property NSUInteger placement; // ivar: _placement
@property (retain) NSArray *searchTerms; // ivar: _searchTerms


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)init:(NSUInteger)arg0 adjacency:(NSUInteger)arg1 language:(id)arg2 locale:(id)arg3 searchTerm:(id)arg4 keywords:(id)arg5 categories:(id)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif