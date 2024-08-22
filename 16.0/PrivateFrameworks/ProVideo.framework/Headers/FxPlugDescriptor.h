// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FXPLUGDESCRIPTOR_H
#define FXPLUGDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface FxPlugDescriptor : NSObject {
    *FxPlugDescriptorPriv _priv;
}




+(id)fxPlugDescriptorWithFxMetaPlug:(id)arg0 ;
+(id)fxPlugDescriptorWithPROPlugIn:(*void)arg0 ;
-(BOOL)canDoGPU;
-(BOOL)requiresCoreImage;
-(Class)plugInClass;
-(id)displayName;
-(id)flavor;
-(id)groupDescriptor;
-(id)initWithFxMetaPlug:(id)arg0 ;
-(id)initWithPROPlugIn:(*void)arg0 ;
-(id)metaPlug;
-(id)plugInTypeUUID;
-(id)properties;
-(id)uuid;
-(id)version;
-(void)dealloc;


@end


#endif