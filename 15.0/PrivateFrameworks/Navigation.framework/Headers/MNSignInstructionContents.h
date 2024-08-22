// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNSIGNINSTRUCTIONCONTENTS_H
#define MNSIGNINSTRUCTIONCONTENTS_H

@class NSArray, NSString;
@protocol MNInstructionContents;


#import "MNListInstructionContents.h"

@interface MNSignInstructionContents : MNListInstructionContents <MNInstructionContents>



@property (readonly, nonatomic) NSInteger context;
@property (retain, nonatomic) NSArray *continueFormats; // ivar: _continueFormats
@property (readonly, nonatomic) BOOL hasServerContent;
@property (retain, nonatomic) NSArray *maneuverFormats; // ivar: _maneuverFormats
@property (retain, nonatomic) NSArray *mergeFormats; // ivar: _mergeFormats
@property (retain, nonatomic) NSString *roadName;
@property (nonatomic) BOOL suppressFallback;
@property (nonatomic) BOOL suppressNames;


+(id)contentsWithStep:(id)arg0 destination:(id)arg1 ;
-(id)_instructionsForFormats:(id)arg0 ;
-(id)description;
-(id)instructionForStage:(NSUInteger)arg0 distance:(CGFloat)arg1 ;
-(id)instructionWithShorterAlternatives;
-(void)_populateFromStep:(id)arg0 ;


@end


#endif