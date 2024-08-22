// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFSIRIACTIVATIONHANDLERCORESPEECHDAEMON_H
#define AFSIRIACTIVATIONHANDLERCORESPEECHDAEMON_H

@class NSString;
@protocol AFSiriActivationHandling;

#import <Foundation/Foundation.h>


@interface AFSiriActivationHandlerCoreSpeechDaemon : NSObject <AFSiriActivationHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleContext:(id)arg0 completion:(id)arg1 ;


@end


#endif