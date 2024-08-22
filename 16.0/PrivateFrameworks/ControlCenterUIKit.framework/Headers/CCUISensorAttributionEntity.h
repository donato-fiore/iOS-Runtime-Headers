// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUISENSORATTRIBUTIONENTITY_H
#define CCUISENSORATTRIBUTIONENTITY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CCUISensorAttributionEntity : NSObject <NSCopying>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *displayNameForCompactView;
@property (copy, nonatomic) NSString *executableDisplayName; // ivar: _executableDisplayName
@property (nonatomic) BOOL isSystemService; // ivar: _isSystemService


+(id)attributionEntityFromSensorActivityData:(id)arg0 ;
+(id)genericLocationSystemServiceEntity;
-(BOOL)isContinuityCaptureExtension;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGenericLocationSystemServiceEntity;
-(BOOL)isKeyboardCameraEntity;
-(BOOL)isSetupApp;
-(BOOL)isSiriAndDictationEntity;
-(BOOL)isWalletSpecialEntity;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;


@end


#endif