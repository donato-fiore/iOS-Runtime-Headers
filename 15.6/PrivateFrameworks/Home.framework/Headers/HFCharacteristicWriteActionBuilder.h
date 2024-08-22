// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCHARACTERISTICWRITEACTIONBUILDER_H
#define HFCHARACTERISTICWRITEACTIONBUILDER_H

@class HMCharacteristicWriteAction, HMCharacteristic;
@protocol NSCopying;


#import "HFActionBuilder.h"

@interface HFCharacteristicWriteActionBuilder : HFActionBuilder

@property (readonly, nonatomic) HMCharacteristicWriteAction *action;
@property (retain, nonatomic) HMCharacteristic *characteristic; // ivar: _characteristic
@property (retain, nonatomic) NSObject<NSCopying> *targetValue; // ivar: _targetValue


+(Class)homeKitRepresentationClass;
-(BOOL)canUpdateWithActionBuilder:(id)arg0 ;
-(BOOL)hasSameTargetAsAction:(id)arg0 ;
-(BOOL)requiresDeviceUnlock;
-(BOOL)updateWithActionBuilder:(id)arg0 ;
-(NSUInteger)hash;
-(id)commitItem;
-(id)compareToObject:(id)arg0 ;
-(id)copyForCreatingNewAction;
-(id)createNewAction;
-(id)description;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 ;
-(id)performValidation;


@end


#endif