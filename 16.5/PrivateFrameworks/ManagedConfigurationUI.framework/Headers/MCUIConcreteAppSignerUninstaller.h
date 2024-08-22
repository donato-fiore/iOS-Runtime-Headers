// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCUICONCRETEAPPSIGNERUNINSTALLER_H
#define MCUICONCRETEAPPSIGNERUNINSTALLER_H

@class NSString;
@protocol MCUIAppSignerUninstaller;

#import <Foundation/Foundation.h>


@interface MCUIConcreteAppSignerUninstaller : NSObject <MCUIAppSignerUninstaller>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)trustedCodeSigningIdentities;
-(void)setTrustedCodeSigningIdentities:(id)arg0 ;
-(void)uninstallApplicationWithBundleID:(id)arg0 ;
-(void)uninstallProvisioningProfileWithUUID:(id)arg0 ;


@end


#endif