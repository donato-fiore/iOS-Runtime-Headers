// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNSPOKENINSTRUCTIONCONTENTS_H
#define MNSPOKENINSTRUCTIONCONTENTS_H

@class NSArray, NSString;
@protocol MNInstructionContents, GEOServerFormattedString;


#import "MNListInstructionContents.h"

@interface MNSpokenInstructionContents : MNListInstructionContents <MNInstructionContents>

 {
    ? _options;
    BOOL _isSecondary;
}


@property (nonatomic) NSInteger context;
@property (retain, nonatomic) NSObject<GEOServerFormattedString> *continueInstructionFormat; // ivar: _continueInstructionFormat
@property (retain, nonatomic) NSArray *executionInstructionFormats; // ivar: _executionInstructionFormats
@property (readonly, nonatomic) BOOL hasServerContent;
@property (retain, nonatomic) NSObject<GEOServerFormattedString> *initialInstructionFormat; // ivar: _initialInstructionFormat
@property (readonly, nonatomic) int numSignsWanted;
@property (retain, nonatomic) NSObject<GEOServerFormattedString> *prepareInstructionFormat; // ivar: _prepareInstructionFormat
@property (retain, nonatomic) NSObject<GEOServerFormattedString> *proceedInstructionFormat; // ivar: _proceedInstructionFormat
@property (retain, nonatomic) NSString *roadName;
@property (nonatomic) BOOL suppressFallback;
@property (nonatomic) BOOL suppressNames;


+(id)contentsWithStep:(id)arg0 destination:(id)arg1 options:(struct ? *)arg2 isSecondary:(BOOL)arg3 ;
-(id)_instructionsForFormats:(id)arg0 distance:(CGFloat)arg1 ;
-(id)description;
-(id)init;
-(id)instructionForStage:(NSUInteger)arg0 distance:(CGFloat)arg1 ;
-(id)instructionWithShorterAlternatives:(*id)arg0 ;
-(void)_populateFromStep:(id)arg0 ;


@end


#endif