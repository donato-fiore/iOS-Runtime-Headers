// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRCSCOMMANDRECOGNIZER_H
#define SRCSCOMMANDRECOGNIZER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "SRCSCommandRecognitionSystem.h"

@interface SRCSCommandRecognizer : NSObject {
    NSArray *_spokenCommands;
    SRCSCommandRecognitionSystem *_commandRecognitionSystem;
}


@property BOOL active; // ivar: _active


-(id)commandRecognitionSystem;
-(id)initWithCommandRecognitionSystem:(id)arg0 commandIdentifiers:(id)arg1 ;
-(id)initWithCommandRecognitionSystem:(id)arg0 spokenCommands:(id)arg1 ;
-(id)spokenCommands;


@end


#endif