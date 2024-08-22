// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPPLUGINHAPSERVICEDESCRIPTION_H
#define CHIPPLUGINHAPSERVICEDESCRIPTION_H

@class HMFObject, NSString;



@interface CHIPPluginHAPServiceDescription : HMFObject

@property (readonly) SEL serviceSelector; // ivar: _serviceSelector
@property (readonly) NSString *serviceType; // ivar: _serviceType


-(id)initWithType:(id)arg0 selectorString:(id)arg1 ;


@end


#endif