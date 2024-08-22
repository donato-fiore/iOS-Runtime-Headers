// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNLISTINSTRUCTIONCONTENTS_H
#define MNLISTINSTRUCTIONCONTENTS_H

@class NSString, NSArray, GEOComposedWaypoint;
@protocol MNInstructionContents, GEOServerFormattedString;

#import <Foundation/Foundation.h>


@interface MNListInstructionContents : NSObject <MNInstructionContents>

 {
    int _maneuverType;
    NSString *_intersectionName;
    NSString *_exitNumber;
    NSArray *_branchNames;
    NSArray *_towardNames;
    int _junctionAngle;
    BOOL _toFreeway;
}


@property (readonly, nonatomic) NSInteger context;
@property (retain, nonatomic) GEOComposedWaypoint *destination; // ivar: _destination
@property (retain, nonatomic) NSString *destinationName; // ivar: _destinationName
@property (nonatomic) CGFloat distance; // ivar: _distance
@property (retain, nonatomic) NSObject<GEOServerFormattedString> *distanceFormat; // ivar: _distanceFormat
@property (readonly, nonatomic) BOOL hasServerContent;
@property (retain, nonatomic) NSArray *instructionFormats; // ivar: _instructionFormats
@property (retain, nonatomic) NSString *roadName; // ivar: _roadName
@property (nonatomic) BOOL suppressFallback; // ivar: _suppressFallback
@property (nonatomic) BOOL suppressNames; // ivar: _suppressNames
@property (nonatomic) int transportType; // ivar: _transportType


+(id)contentsWithStep:(id)arg0 ;
-(id)_instructionsForFormats:(id)arg0 ;
-(id)description;
-(id)init;
-(id)instruction;
-(id)instructionForStage:(NSUInteger)arg0 distance:(CGFloat)arg1 ;
-(id)instructionWithShorterAlternatives;
-(id)stringForDistance:(CGFloat)arg0 ;
-(void)_populateFromStep:(id)arg0 ;


@end


#endif