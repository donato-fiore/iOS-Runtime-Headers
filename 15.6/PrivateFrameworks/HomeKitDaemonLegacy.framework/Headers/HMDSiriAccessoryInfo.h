// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSIRIACCESSORYINFO_H
#define HMDSIRIACCESSORYINFO_H


#import <Foundation/Foundation.h>


@interface HMDSiriAccessoryInfo : NSObject

@property (nonatomic) BOOL supportsDragonSiri; // ivar: _supportsDragonSiri
@property (weak, nonatomic) id *targetsAccessory; // ivar: _targetsAccessory


+(id)infoWithTargetableAccessory:(id)arg0 ;
-(BOOL)isActiveAndSupportsDragonSiri;


@end


#endif