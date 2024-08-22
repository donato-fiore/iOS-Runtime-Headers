// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIDVRGBCAPTUREUIRESULT_H
#define CIDVRGBCAPTUREUIRESULT_H

@class NSString, NSNumber, NSArray, NSData, NSURL;

#import <Foundation/Foundation.h>


@interface CIDVRGBCaptureUIResult : NSObject

@property (retain, nonatomic) NSString *ageLabel; // ivar: _ageLabel
@property (retain, nonatomic) NSNumber *assessmentFAC; // ivar: _assessmentFAC
@property (retain, nonatomic) NSNumber *assessmentID; // ivar: _assessmentID
@property (retain, nonatomic) NSNumber *assessmentPRD; // ivar: _assessmentPRD
@property (retain, nonatomic) NSNumber *assessmentTA; // ivar: _assessmentTA
@property (retain, nonatomic) NSArray *assessmentsFAC; // ivar: _assessmentsFAC
@property (retain, nonatomic) NSArray *assessmentsPRD; // ivar: _assessmentsPRD
@property (retain, nonatomic) NSArray *assessmentsTA; // ivar: _assessmentsTA
@property (retain, nonatomic) NSData *boundACL; // ivar: _boundACL
@property (retain, nonatomic) NSString *ethnicityLabel; // ivar: _ethnicityLabel
@property (retain, nonatomic) NSString *faceHairLabel; // ivar: _faceHairLabel
@property (retain, nonatomic) NSArray *gestureSequence; // ivar: _gestureSequence
@property (retain, nonatomic) NSString *glassesLabel; // ivar: _glassesLabel
@property (retain, nonatomic) NSString *headgearLabel; // ivar: _headgearLabel
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (retain, nonatomic) NSNumber *livenessLabel; // ivar: _livenessLabel
@property (retain, nonatomic) NSString *sexLabel; // ivar: _sexLabel
@property (retain, nonatomic) NSString *skintoneLabel; // ivar: _skintoneLabel
@property (retain, nonatomic) NSArray *timestampsFAC; // ivar: _timestampsFAC
@property (retain, nonatomic) NSArray *timestampsID; // ivar: _timestampsID
@property (retain, nonatomic) NSURL *videoURL; // ivar: _videoURL




@end


#endif