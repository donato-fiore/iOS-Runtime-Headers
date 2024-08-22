// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSECONSISTENCYCHECKDEVICECREDENTIALAPPLETPROPERTIES_H
#define PKSECONSISTENCYCHECKDEVICECREDENTIALAPPLETPROPERTIES_H


#import <Foundation/Foundation.h>


@interface PKSEConsistencyCheckDeviceCredentialAppletProperties : NSObject

@property (readonly, nonatomic, getter=isContainer) BOOL container; // ivar: _container
@property (readonly, nonatomic, getter=isLocked) BOOL locked; // ivar: _locked


-(id)description;
-(id)init;


@end


#endif