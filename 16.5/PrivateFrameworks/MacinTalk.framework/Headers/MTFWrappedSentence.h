// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTFWRAPPEDSENTENCE_H
#define MTFWRAPPEDSENTENCE_H



#import "MTFWrappedSpeechElement.h"

@interface MTFWrappedSentence : MTFWrappedSpeechElement

@property (readonly, nonatomic) float fBaseFloor;
@property (readonly, nonatomic) float fBaseRange;
@property (readonly, nonatomic) float fBaseRate;
@property (readonly, nonatomic) float fDuration;
@property (readonly, nonatomic) short fFinalRate;
@property (readonly, nonatomic) short fFlags;
@property (readonly, nonatomic) short fNumWords;


-(struct MTFESentence *)elem;


@end


#endif