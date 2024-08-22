// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRPAIRINGCOMPATIBILITYVERSIONINFO_H
#define NRPAIRINGCOMPATIBILITYVERSIONINFO_H


#import <Foundation/Foundation.h>


@interface NRPairingCompatibilityVersionInfo : NSObject

@property (nonatomic) BOOL isOverrideActive; // ivar: _isOverrideActive
@property (nonatomic) BOOL isRevlockFeatureFlagActive; // ivar: _isRevlockFeatureFlagActive
@property (nonatomic) NSInteger maxPairingCompatibilityVersion; // ivar: _maxPairingCompatibilityVersion
@property (nonatomic) NSInteger minPairingCompatibilityVersion; // ivar: _minPairingCompatibilityVersion
@property (nonatomic) NSInteger minPairingCompatibilityVersionWithChipID; // ivar: _minPairingCompatibilityVersionWithChipID
@property (nonatomic) NSInteger minQuickSwitchCompatibilityVersion; // ivar: _minQuickSwitchCompatibilityVersion
@property (nonatomic) NSInteger pairingCompatibilityVersion; // ivar: _pairingCompatibilityVersion


+(NSUInteger)valueForToken:(int)arg0 ;
+(id)numberFromCFPrefs:(id)arg0 ;
+(id)stringFromCFPrefs:(id)arg0 ;
+(id)systemVersions;
-(NSInteger)minPairingCompatibilityVersionForChipID:(id)arg0 ;
-(NSInteger)minPairingCompatibilityVersionForChipID:(id)arg0 name:(id)arg1 defaultVersion:(NSInteger)arg2 ;
-(NSInteger)minQuickSwitchPairingCompatibilityVersionForChipID:(id)arg0 ;
-(id)initInternal;


@end


#endif