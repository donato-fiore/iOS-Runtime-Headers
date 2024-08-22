// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNTRANSITINSTRUCTION_H
#define MNTRANSITINSTRUCTION_H

@class NSArray;
@protocol GEOServerFormattedString;

#import <Foundation/Foundation.h>


@interface MNTransitInstruction : NSObject

@property (readonly, nonatomic) NSInteger context; // ivar: _context
@property (retain, nonatomic) NSObject<GEOServerFormattedString> *countStopsFormattedString; // ivar: _countStopsFormattedString
@property (retain, nonatomic) NSObject<GEOServerFormattedString> *departureBarInstruction; // ivar: _departureBarInstruction
@property (nonatomic) NSInteger departureBarStyle; // ivar: _departureBarStyle
@property (retain, nonatomic) NSObject<GEOServerFormattedString> *expandableListFormattedString; // ivar: _expandableListFormattedString
@property (nonatomic) BOOL hideTimeInstructionsWhenCollapsed; // ivar: _hideTimeInstructionsWhenCollapsed
@property (copy, nonatomic) NSArray *majorFormattedInstruction; // ivar: _majorFormattedInstruction
@property (copy, nonatomic) NSArray *minorFormattedInstruction; // ivar: _minorFormattedInstruction
@property (retain, nonatomic) NSObject<GEOServerFormattedString> *primaryTimeInstruction; // ivar: _primaryTimeInstruction
@property (retain, nonatomic) NSObject<GEOServerFormattedString> *secondaryTimeinstruction; // ivar: _secondaryTimeinstruction
@property (copy, nonatomic) NSArray *tertiaryFormattedInstruction; // ivar: _tertiaryFormattedInstruction


+(id)instructionForUncertainArrivalToStationStep:(id)arg0 context:(NSInteger)arg1 ;
-(id)formattedInstructionForType:(NSInteger)arg0 ;
-(id)initWithContext:(NSInteger)arg0 ;
-(id)instructionSet;
-(id)instructionSetsForInstructionType:(NSInteger)arg0 ;
-(id)overridenInstructionsMapping;
-(void)_fillInInstructions;
-(void)refreshInstructionStrings;


@end


#endif