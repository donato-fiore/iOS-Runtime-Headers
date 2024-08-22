// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STTELEPHONYMOBILEEQUIPMENTINFO_H
#define STTELEPHONYMOBILEEQUIPMENTINFO_H

@class NSString;
@protocol NSCopying, NSMutableCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface STTelephonyMobileEquipmentInfo : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>



@property (readonly, copy, nonatomic) NSString *CSN; // ivar: _CSN
@property (readonly, copy, nonatomic) NSString *ICCID; // ivar: _ICCID
@property (readonly, copy, nonatomic) NSString *IMEI; // ivar: _IMEI
@property (readonly, copy, nonatomic) NSString *MEID; // ivar: _MEID
@property (readonly, copy, nonatomic) NSString *bootstrapICCID; // ivar: _bootstrapICCID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isOnBootstrap) BOOL onBootstrap;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif