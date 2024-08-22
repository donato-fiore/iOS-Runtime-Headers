// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICESETUPEXTENSIONMESSENGERREQUEST_H
#define MTSDEVICESETUPEXTENSIONMESSENGERREQUEST_H

@class HMFObject, NSUUID;



@interface MTSDeviceSetupExtensionMessengerRequest : HMFObject

@property (readonly, copy) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier


-(id)initWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif