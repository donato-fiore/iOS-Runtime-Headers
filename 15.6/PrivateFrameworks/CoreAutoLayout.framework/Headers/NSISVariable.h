// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSISVARIABLE_H
#define NSISVARIABLE_H

@class NSMapTable, NSArray;
@protocol NSCoding, NSISVariableDelegate;

#import <Foundation/Foundation.h>


@interface NSISVariable : NSObject <NSCoding>

 {
    NSMapTable *_overflowEngines;
    NSISEngine" _engines;
    ? _engineVarIndexes;
    unsigned int _ident;
}


@property NSObject<NSISVariableDelegate> *delegate; // ivar: _delegate
@property (readonly) NSArray *engines;
@property (readonly) int orientationHint;
@property (readonly) BOOL shouldBeMinimized;
@property (readonly) int valueRestriction;


+(id)variableMarkingConstraint:(id)arg0 valueRestriction:(int)arg1 shouldBeMinimized:(BOOL)arg2 ;
+(id)variableWithDelegate:(id)arg0 valueRestriction:(int)arg1 shouldBeMinimized:(BOOL)arg2 ;
+(id)variableWithName:(id)arg0 valueRestriction:(int)arg1 shouldBeMinimized:(BOOL)arg2 ;
+(id)variableWithName:(id)arg0 valueRestriction:(int)arg1 shouldBeMinimized:(BOOL)arg2 valueIsUserObservable:(BOOL)arg3 ;
-(BOOL)markedConstraintIsEligibleForIntegralizationAdjustment;
-(BOOL)shouldBeIntegral;
-(BOOL)valueIsUserVisible;
-(CGFloat)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
-(NSUInteger)hash;
-(id)description;
-(id)descriptionInEngine:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)markedConstraint;
-(struct ? )overflowEngineVarIndexForEngine:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif