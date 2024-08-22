// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTFILTER_H
#define CNCONTACTFILTER_H

@class NSString, NSPredicate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CNContactFilter : NSObject <NSCopying>



@property (copy, nonatomic) NSString *fullTextString; // ivar: _fullTextString
@property (readonly, nonatomic) NSPredicate *predicate;
@property (nonatomic) BOOL rankSortedResults; // ivar: _rankSortedResults
@property (readonly, nonatomic) BOOL supportsSections;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif