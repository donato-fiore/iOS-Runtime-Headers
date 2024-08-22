// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRTERMSACKNOWLEDGEMENTREGISTRY_H
#define NRTERMSACKNOWLEDGEMENTREGISTRY_H

@class NSString;
@protocol NRTermsAcknowledgementRegistry;

#import <Foundation/Foundation.h>


@interface NRTermsAcknowledgementRegistry : NSObject <NRTermsAcknowledgementRegistry>

 {
    id<NRTermsAcknowledgementRegistry> *_proxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)errorStringWithEnum:(NSUInteger)arg0 ;
+(id)errorWithEnum:(NSUInteger)arg0 ;
-(void)add:(id)arg0 forDeviceID:(id)arg1 withCompletion:(id)arg2 ;
-(void)checkForAcknowledgement:(id)arg0 forDeviceID:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif