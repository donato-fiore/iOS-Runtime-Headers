// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETWRITERCLIENTINITIATEDTERMINALHELPER_H
#define AVASSETWRITERCLIENTINITIATEDTERMINALHELPER_H



#import "AVAssetWriterTerminalHelper.h"

@interface AVAssetWriterClientInitiatedTerminalHelper : AVAssetWriterTerminalHelper {
    NSInteger _terminalStatus;
}




-(NSInteger)status;
-(id)initWithConfigurationState:(id)arg0 ;
-(id)initWithConfigurationState:(id)arg0 terminalStatus:(NSInteger)arg1 ;


@end


#endif