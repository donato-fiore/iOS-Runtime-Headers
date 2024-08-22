// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPPREFLIGHTUSERINTERACTIONALERT_H
#define FPPREFLIGHTUSERINTERACTIONALERT_H


#import <Foundation/Foundation.h>

#import "FPStringFormat.h"

@interface FPPreflightUserInteractionAlert : NSObject

@property (retain, nonatomic) FPStringFormat *cancelCaptionFormat; // ivar: _cancelCaptionFormat
@property (retain, nonatomic) FPStringFormat *continueCaptionFormat; // ivar: _continueCaptionFormat
@property (nonatomic) BOOL continueIsDestructive; // ivar: _continueIsDestructive
@property (nonatomic) BOOL enableContinue; // ivar: _enableContinue
@property (retain, nonatomic) FPStringFormat *subtitleFormat; // ivar: _subtitleFormat
@property (retain, nonatomic) FPStringFormat *titleFormat; // ivar: _titleFormat


+(id)alertFromDictionary:(id)arg0 localizationLookup:(id)arg1 ;


@end


#endif