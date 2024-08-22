// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPQLUPGRADEINFO_H
#define CKDPQLUPGRADEINFO_H


#import <Foundation/Foundation.h>


@interface CKDPQLUpgradeInfo : NSObject

@property (nonatomic) BOOL shouldTruncateDatabase; // ivar: _shouldTruncateDatabase
@property (nonatomic) BOOL shouldVacuum; // ivar: _shouldVacuum
@property (nonatomic) *unk upgradeFunction; // ivar: _upgradeFunction
@property (nonatomic) NSUInteger version; // ivar: _version


+(id)upgradeInfoWithVersion:(NSUInteger)arg0 function:(*unk)arg1 shouldVacuum:(BOOL)arg2 shouldTruncate:(BOOL)arg3 ;
-(id)initWithVersion:(NSUInteger)arg0 function:(*unk)arg1 shouldVacuum:(BOOL)arg2 shouldTruncate:(BOOL)arg3 ;


@end


#endif