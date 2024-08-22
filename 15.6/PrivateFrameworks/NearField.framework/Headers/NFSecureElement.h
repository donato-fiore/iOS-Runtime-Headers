// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFSECUREELEMENT_H
#define NFSECUREELEMENT_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "NFHardwareSecureElementInfo.h"

@interface NFSecureElement : NSObject {
    NFHardwareSecureElementInfo *_info;
    BOOL _isDirty;
}


@property (readonly) NSUInteger OSVersion;
@property (readonly) BOOL available;
@property (readonly) NSString *eccCertificate;
@property (readonly) NSString *eckaCertificate;
@property (readonly) NSUInteger fullOSVersion;
@property (readonly) BOOL isInRestrictedMode;
@property (readonly) BOOL isProductionSigned;
@property (readonly) NSString *rsaCertificate;
@property (readonly) NSNumber *sequenceCounter;
@property (readonly) NSString *serialNumber;
@property (readonly) unsigned int supportedTechnologies;


+(id)embeddedSecureElement;
+(id)icefallSecureElement;
-(BOOL)isSeshatAvailabledInRestrictedMode;
-(id)_initWithInfo:(id)arg0 ;
-(id)identifier;
-(id)info;
-(id)manifestQueryBlob;
-(unsigned int)hwType;
-(void)_markDirty;
-(void)_setIsInRestrictedPerformanceMode:(BOOL)arg0 ;
-(void)_updateIfDirty;
-(void)_updateSecureElementInfo:(id)arg0 ;


@end


#endif