// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRCARPLAYCAPABILITIES_H
#define CRCARPLAYCAPABILITIES_H

@class NSValue, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRCarPlayCapabilities : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSValue *dashboardRoundedCorners; // ivar: _dashboardRoundedCorners
@property (nonatomic) NSUInteger disabledFeature; // ivar: _disabledFeature
@property (nonatomic) NSInteger nowPlayingAlbumArtMode; // ivar: _nowPlayingAlbumArtMode
@property (nonatomic) BOOL persisted; // ivar: _persisted
@property (nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle
@property (nonatomic) NSString *version; // ivar: _version
@property (retain, nonatomic) NSValue *viewAreaInsets; // ivar: _viewAreaInsets


+(BOOL)supportsSecureCoding;
+(id)capabilitiesIdentifier;
+(id)capabilitiesVersion;
+(id)carPlayCapabilitiesCache;
+(id)fetchCarCapabilities;
+(id)newCapabilitiesFromGlobalDomain;
+(void)_resetCapabilitiesGlobalDomain;
+(void)invalidateCarPlayCapabilitiesCache;
+(void)setCapabilitiesIdentifier:(id)arg0 ;
+(void)setCapabilitiesVersion:(id)arg0 ;
+(void)setCarPlayCapabilitiesCache:(id)arg0 ;
+(void)waitForCarCapabilitiesValues;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCapabilities:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)informativeText;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)persistCapabilitiesToGlobalDomain;


@end


#endif