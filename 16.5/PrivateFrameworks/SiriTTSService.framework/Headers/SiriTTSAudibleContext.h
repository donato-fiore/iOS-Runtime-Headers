// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRITTSAUDIBLECONTEXT_H
#define SIRITTSAUDIBLECONTEXT_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SiriTTSAudibleContext : NSObject <NSSecureCoding>

 {
    ? siriRequestId;
    ? didStartSpeaking;
}


@property (nonatomic) unsigned int audioSessionId; // ivar: audioSessionId
@property (nonatomic, copy) id *didStartSpeaking;
@property (nonatomic) BOOL immediate; // ivar: immediate
@property (nonatomic, copy) NSUUID *siriRequestId;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif