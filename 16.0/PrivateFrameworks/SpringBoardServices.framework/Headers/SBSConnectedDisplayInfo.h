// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSCONNECTEDDISPLAYINFO_H
#define SBSCONNECTEDDISPLAYINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SBSRelativeDisplayArrangement.h"
#import "SBSDisplayModeSettings.h"

@interface SBSConnectedDisplayInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) SBSRelativeDisplayArrangement *arrangement; // ivar: _arrangement
@property (readonly, nonatomic) SBSDisplayModeSettings *displayModeSettings; // ivar: _displayModeSettings
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=isMirrored) BOOL mirrored; // ivar: _mirrored
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) NSUInteger supportedScales; // ivar: _supportedScales


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 size:(struct CGSize )arg2 mirrored:(BOOL)arg3 supportedScales:(NSUInteger)arg4 displayModeSettings:(id)arg5 arrangement:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif