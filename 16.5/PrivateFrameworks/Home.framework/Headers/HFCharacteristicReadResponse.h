// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCHARACTERISTICREADRESPONSE_H
#define HFCHARACTERISTICREADRESPONSE_H

@class HMCharacteristic, NSString, NSError, NSSet;
@protocol NAIdentifiable;

#import <Foundation/Foundation.h>


@interface HFCharacteristicReadResponse : NSObject <NAIdentifiable>



@property (readonly, nonatomic) HMCharacteristic *characteristic; // ivar: _characteristic
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *readTraits; // ivar: _readTraits
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *value; // ivar: _value


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCharacteristic:(id)arg0 readTraits:(id)arg1 value:(id)arg2 error:(id)arg3 ;
-(id)initWithHomeKitResponse:(id)arg0 value:(id)arg1 readTraits:(id)arg2 ;
-(id)valueWithExpectedClass:(Class)arg0 ;


@end


#endif