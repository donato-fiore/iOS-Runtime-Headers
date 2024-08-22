// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCHARACTERISTICVALUEDISPLAYERROR_H
#define HFCHARACTERISTICVALUEDISPLAYERROR_H

@class NSError, HMSymptom;
@protocol HFCharacteristicOperationContextProviding;

#import <Foundation/Foundation.h>


@interface HFCharacteristicValueDisplayError : NSObject

@property (nonatomic) NSUInteger category; // ivar: _category
@property (retain, nonatomic) NSObject<HFCharacteristicOperationContextProviding> *contextProvider; // ivar: _contextProvider
@property (readonly, nonatomic, getter=isPersistentError) BOOL persistentError;
@property (copy, nonatomic) NSError *underlyingError; // ivar: _underlyingError
@property (retain, nonatomic) HMSymptom *underlyingSymptom; // ivar: _underlyingSymptom


+(id)errorWithUnderlyingError:(id)arg0 readTraits:(id)arg1 contextProvider:(id)arg2 ;
+(id)errorWithUnderlyingSymptom:(id)arg0 isFixingCurrently:(BOOL)arg1 contextProvider:(id)arg2 ;
+(id)mostEgregiousError:(id)arg0 ;


@end


#endif