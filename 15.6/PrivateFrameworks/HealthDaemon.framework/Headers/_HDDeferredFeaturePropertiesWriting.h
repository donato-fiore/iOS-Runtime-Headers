// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDDEFERREDFEATUREPROPERTIESWRITING_H
#define _HDDEFERREDFEATUREPROPERTIESWRITING_H

@class HDFeaturePropertiesWriting, NRPairedDeviceRegistry;



@interface _HDDeferredFeaturePropertiesWriting : HDFeaturePropertiesWriting {
    NRPairedDeviceRegistry *_pairedDeviceRegistry;
}




-(id)initWithLocalDomain:(id)arg0 pairedDeviceRegistry:(id)arg1 ;
-(void)synchronize;


@end


#endif