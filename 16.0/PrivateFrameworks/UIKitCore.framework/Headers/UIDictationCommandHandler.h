// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDICTATIONCOMMANDHANDLER_H
#define UIDICTATIONCOMMANDHANDLER_H

@class SRCSCommandRecognitionSystem, SRCSCommandRecognizer;

#import <Foundation/Foundation.h>


@interface UIDictationCommandHandler : NSObject

@property (retain, nonatomic) SRCSCommandRecognitionSystem *cmdRecSystem; // ivar: _cmdRecSystem
@property (retain, nonatomic) SRCSCommandRecognizer *cmdRecognizer; // ivar: _cmdRecognizer


-(void)recognizeCommandWithPhrases:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerCommandIdentifiers:(id)arg0 locale:(id)arg1 ;


@end


#endif