// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSUSPENDEDSTATEOVERRIDEVALUEPROVIDER_H
#define HFSUSPENDEDSTATEOVERRIDEVALUEPROVIDER_H

@class NSString;
@protocol HFOverrideCharacteristicValueProvider;

#import <Foundation/Foundation.h>


@interface HFSuspendedStateOverrideValueProvider : NSObject <HFOverrideCharacteristicValueProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)overrideDefaultValueForCharacteristicType;
-(BOOL)valueSource:(id)arg0 shouldOverrideValueForCharacteristic:(id)arg1 ;
-(id)valueSource:(id)arg0 overrideValueForCharacteristic:(id)arg1 ;


@end


#endif