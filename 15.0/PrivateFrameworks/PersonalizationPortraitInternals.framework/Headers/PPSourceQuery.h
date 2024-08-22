// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPSOURCEQUERY_H
#define PPSOURCEQUERY_H

@class NSDate, NSSet, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPSourceQuery : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSDate *fromDate; // ivar: _fromDate
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (retain, nonatomic) NSSet *matchingBundleIds; // ivar: _matchingBundleIds
@property (retain, nonatomic) NSString *matchingContactHandle; // ivar: _matchingContactHandle
@property (retain, nonatomic) NSSet *matchingDocumentIds; // ivar: _matchingDocumentIds
@property (retain, nonatomic) NSDate *toDate; // ivar: _toDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSourceQuery:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif