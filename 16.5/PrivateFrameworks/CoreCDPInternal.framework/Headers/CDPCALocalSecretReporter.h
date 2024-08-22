// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPCALOCALSECRETREPORTER_H
#define CDPCALOCALSECRETREPORTER_H



#import "CDPCAReporter.h"

@interface CDPCALocalSecretReporter : CDPCAReporter



-(id)init;
-(void)didChangeLocalSecret;
-(void)didRemoveLocalSecret;


@end


#endif