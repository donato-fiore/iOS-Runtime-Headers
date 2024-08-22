// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIANALYTICSXPCMESSAGEENVELOPE_H
#define SIRIANALYTICSXPCMESSAGEENVELOPE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsXPCMessageEnvelope : NSObject <NSSecureCoding>

 {
    ? payload;
}


@property (nonatomic, readonly) NSInteger eventTypeId; // ivar: eventTypeId
@property (nonatomic, readonly) NSData *payload;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventTypeId:(NSInteger)arg0 payload:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif