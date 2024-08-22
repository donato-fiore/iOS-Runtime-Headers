// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PADCLASSIFIERRESULT_H
#define PADCLASSIFIERRESULT_H

@class NSString, NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface PADClassifierResult : NSObject

@property (retain, nonatomic) NSString *ageLabel; // ivar: _ageLabel
@property (retain, nonatomic) NSNumber *assessmentFAC; // ivar: _assessmentFAC
@property (retain, nonatomic) NSNumber *assessmentFakePRD; // ivar: _assessmentFakePRD
@property (retain, nonatomic) NSNumber *assessmentID; // ivar: _assessmentID
@property (retain, nonatomic) NSNumber *assessmentLivePRD; // ivar: _assessmentLivePRD
@property (retain, nonatomic) NSNumber *assessmentTA; // ivar: _assessmentTA
@property (retain, nonatomic) NSArray *assessmentsFAC; // ivar: _assessmentsFAC
@property (retain, nonatomic) NSArray *assessmentsPRD; // ivar: _assessmentsPRD
@property (retain, nonatomic) NSArray *assessmentsTA; // ivar: _assessmentsTA
@property (retain, nonatomic) NSString *ethnicityLabel; // ivar: _ethnicityLabel
@property (retain, nonatomic) NSString *faceHairLabel; // ivar: _faceHairLabel
@property (retain, nonatomic) NSArray *faceprintsID; // ivar: _faceprintsID
@property (retain, nonatomic) NSArray *gestureSequence; // ivar: _gestureSequence
@property (retain, nonatomic) NSString *glassesLabel; // ivar: _glassesLabel
@property (retain, nonatomic) NSString *headgearLabel; // ivar: _headgearLabel
@property (retain, nonatomic) NSNumber *ignoredStitches; // ivar: _ignoredStitches
@property (retain, nonatomic) NSNumber *livenessLabel; // ivar: _livenessLabel
@property (retain, nonatomic) NSNumber *maxNccHigh; // ivar: _maxNccHigh
@property (retain, nonatomic) NSNumber *maxNccLow; // ivar: _maxNccLow
@property (retain, nonatomic) NSString *sexLabel; // ivar: _sexLabel
@property (retain, nonatomic) NSString *skintoneLabel; // ivar: _skintoneLabel
@property (retain, nonatomic) NSArray *timestampsButtonPressed; // ivar: _timestampsButtonPressed
@property (retain, nonatomic) NSArray *timestampsFAC; // ivar: _timestampsFAC
@property (retain, nonatomic) NSArray *timestampsID; // ivar: _timestampsID




@end


#endif