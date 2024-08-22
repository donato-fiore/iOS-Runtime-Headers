// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSMAGSAFEACCESSORY_H
#define CSMAGSAFEACCESSORY_H

@class NSString, UIColor;

#import <Foundation/Foundation.h>


@interface CSMagSafeAccessory : NSObject

@property (readonly, nonatomic) CGFloat attachAnimationDelay; // ivar: _attachAnimationDelay
@property (nonatomic) BOOL blocksWallet; // ivar: _blocksWallet
@property (readonly, nonatomic) BOOL chimeOnDetach;
@property (retain, nonatomic) NSString *endpointUUID; // ivar: _endpointUUID
@property (readonly, nonatomic) BOOL hasStaticView;
@property (nonatomic) BOOL isSupported; // ivar: _isSupported
@property (retain, nonatomic) UIColor *primaryColor; // ivar: _primaryColor
@property (retain, nonatomic) UIColor *secondaryColor; // ivar: _secondaryColor
@property (readonly, nonatomic) BOOL shouldDelayAnimation;
@property (readonly, nonatomic) BOOL shouldLockScreenWhenAttached;
@property (readonly, nonatomic) BOOL shouldShowAnimation;
@property (nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) CGRect visibleScreenCoordinates;
@property (readonly, nonatomic, getter=isWindowed) BOOL windowed;


+(id)accessoryWithType:(NSInteger)arg0 primaryColor:(id)arg1 secondoryColor:(id)arg2 ;
-(BOOL)_blocksWalletAnimationForNFCtype:(unsigned char)arg0 ;
-(BOOL)_isSupportedFromDictionary:(id)arg0 ;
-(BOOL)blocksAttachAnimationForAccessoryType:(NSInteger)arg0 ;
-(CGFloat)_delayFromDictionary:(id)arg0 ;
-(NSInteger)_accessoryTypeForNFCtype:(unsigned char)arg0 ;
-(id)accessoryTypeString;
-(id)colorForP3ColorData:(id)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 endpointUUID:(id)arg1 ;
-(unsigned char)_accessoryTypeFromDictionary:(id)arg0 ;


@end


#endif