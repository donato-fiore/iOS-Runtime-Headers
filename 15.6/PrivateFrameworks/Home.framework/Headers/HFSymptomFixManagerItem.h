// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSYMPTOMFIXMANAGERITEM_H
#define HFSYMPTOMFIXMANAGERITEM_H

@class HMAccessory, HMSymptomFixSession, HMSymptom;

#import <Foundation/Foundation.h>


@interface HFSymptomFixManagerItem : NSObject

@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) HMSymptomFixSession *fixSession; // ivar: _fixSession
@property (readonly, nonatomic) HMSymptom *symptom; // ivar: _symptom


-(id)description;
-(id)initWithSymptom:(id)arg0 fixSession:(id)arg1 accessory:(id)arg2 ;


@end


#endif