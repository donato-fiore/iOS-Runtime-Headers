// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSDKSHOTDETECTOR_H
#define AXSDKSHOTDETECTOR_H

@class NSString;
@protocol NSSecureCoding;


#import "AXSDDetector.h"

@interface AXSDKShotDetector : AXSDDetector <NSSecureCoding>

 {
    NSString *_customName;
    NSString *_kshotCategory;
}


@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *name;


+(BOOL)supportsSecureCoding;
-(BOOL)isCustom;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToKShotDetector:(id)arg0 ;
-(BOOL)isModelReady;
-(BOOL)isTrainingComplete;
-(NSUInteger)compatibilityVersion;
-(NSUInteger)contentVersion;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)modelURLString;
-(id)recordings;
-(void)addRecording:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setRecordings:(id)arg0 ;


@end


#endif