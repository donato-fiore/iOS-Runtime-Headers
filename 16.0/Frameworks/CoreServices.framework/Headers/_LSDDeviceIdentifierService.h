// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSDDEVICEIDENTIFIERSERVICE_H
#define _LSDDEVICEIDENTIFIERSERVICE_H

@class LSDService;



@interface _LSDDeviceIdentifierService : LSDService



+(Class)clientClass;
+(id)XPCInterface;
+(id)vendorNameForDeviceIdentifiersWithContext:(struct LSContext *)arg0 bundleUnit:(unsigned int)arg1 bundleData:(struct LSBundleData *)arg2 ;
+(unsigned short)connectionType;
+(void)clearIdentifiersForUninstallationWithContext:(struct LSContext *)arg0 bundleUnit:(unsigned int)arg1 bundleData:(struct LSBundleData *)arg2 ;
+(void)generateIdentifiersForInstallationWithContext:(struct LSContext *)arg0 bundleUnit:(unsigned int)arg1 bundleData:(struct LSBundleData *)arg2 ;


@end


#endif