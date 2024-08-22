// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMSPEECHOUTPUTACTION_H
#define AXMSPEECHOUTPUTACTION_H

@class NSString;


#import "AXMOutputAction.h"

@interface AXMSpeechOutputAction : AXMOutputAction {
    NSString *_text;
}


@property (readonly, nonatomic) NSString *text;


-(id)initWithText:(id)arg0 ;


@end


#endif