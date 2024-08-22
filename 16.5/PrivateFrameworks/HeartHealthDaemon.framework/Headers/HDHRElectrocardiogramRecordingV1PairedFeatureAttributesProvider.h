// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHRELECTROCARDIOGRAMRECORDINGV1PAIREDFEATUREATTRIBUTESPROVIDER_H
#define HDHRELECTROCARDIOGRAMRECORDINGV1PAIREDFEATUREATTRIBUTESPROVIDER_H

@class HKPairedFeatureAttributes, NSString;
@protocol HDPairedFeatureAttributesProviding, HDPairedDeviceCapabilityProviding;

#import <Foundation/Foundation.h>


@interface HDHRElectrocardiogramRecordingV1PairedFeatureAttributesProvider : NSObject <HDPairedFeatureAttributesProviding>

 {
    id<HDPairedFeatureAttributesProviding> *_attributesProvider;
    id<HDPairedDeviceCapabilityProviding> *_pairedDeviceProvider;
}


@property (readonly, copy, nonatomic) HKPairedFeatureAttributes *currentPairedFeatureAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPairedFeatureAttributesProvider:(id)arg0 pairedDeviceCapabilityProvider:(id)arg1 ;


@end


#endif