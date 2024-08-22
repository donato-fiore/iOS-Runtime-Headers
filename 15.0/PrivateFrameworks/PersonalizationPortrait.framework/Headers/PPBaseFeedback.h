// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPBASEFEEDBACK_H
#define PPBASEFEEDBACK_H

@class NSString, NSArray, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PPBaseFeedback : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *clientBundleId; // ivar: _clientBundleId
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) NSArray *feedbackItems; // ivar: _feedbackItems
@property (readonly) BOOL isMapped;
@property (readonly, nonatomic) NSString *mappingId; // ivar: _mappingId
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPPBaseFeedback:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeedbackItems:(id)arg0 mappingId:(id)arg1 ;
-(id)initWithFeedbackItems:(id)arg0 timestamp:(id)arg1 clientIdentifier:(id)arg2 clientBundleId:(id)arg3 mappingId:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif