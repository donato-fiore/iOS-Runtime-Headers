// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSULOCALUTILITIES_H
#define HMDSULOCALUTILITIES_H

@class HMFObject;



@interface HMDSULocalUtilities : HMFObject



+(id)descriptorFromControllerStatus:(id)arg0 controllerDescriptor:(id)arg1 errorCode:(id)arg2 ;
+(id)progressFromControllerProgress:(id)arg0 ;
+(void)parseProductVersion:(id)arg0 intoMajorVersion:(*id)arg1 minorVersion:(*id)arg2 updateVersion:(*id)arg3 ;


@end


#endif