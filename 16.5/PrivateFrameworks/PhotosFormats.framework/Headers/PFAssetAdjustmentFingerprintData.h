// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFASSETADJUSTMENTFINGERPRINTDATA_H
#define PFASSETADJUSTMENTFINGERPRINTDATA_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface PFAssetAdjustmentFingerprintData : NSObject

@property (copy, nonatomic) NSString *adjustmentCompoundVersion; // ivar: _adjustmentCompoundVersion
@property (copy, nonatomic) NSString *adjustmentCreatorCode; // ivar: _adjustmentCreatorCode
@property (nonatomic) NSUInteger adjustmentSourceType; // ivar: _adjustmentSourceType
@property (copy, nonatomic) NSString *adjustmentType; // ivar: _adjustmentType
@property (copy, nonatomic) NSData *baseImage; // ivar: _baseImage
@property (copy, nonatomic) NSString *baseImageFingerprint; // ivar: _baseImageFingerprint
@property (copy, nonatomic) NSData *largeAdjustmentData; // ivar: _largeAdjustmentData
@property (copy, nonatomic) NSString *largeAdjustmentDataFingerprint; // ivar: _largeAdjustmentDataFingerprint
@property (copy, nonatomic) NSData *secondaryAdjustmentData; // ivar: _secondaryAdjustmentData
@property (copy, nonatomic) NSData *simpleAdjustmentData; // ivar: _simpleAdjustmentData




@end


#endif