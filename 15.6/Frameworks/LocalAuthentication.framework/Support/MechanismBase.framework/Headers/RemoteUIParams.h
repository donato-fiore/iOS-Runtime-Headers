// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMOTEUIPARAMS_H
#define REMOTEUIPARAMS_H

@class NSData, MechanismUI<LAUIMechanism><LARemoteUIHost>, NSNumber;

#import <Foundation/Foundation.h>


@interface RemoteUIParams : NSObject

@property (retain, nonatomic) NSData *auditTokenData; // ivar: _auditTokenData
@property (nonatomic) BOOL forSiri; // ivar: _forSiri
@property (nonatomic) int pid; // ivar: _pid
@property (retain, nonatomic) MechanismUI<LAUIMechanism><LARemoteUIHost> *uiMechanism; // ivar: _uiMechanism
@property (nonatomic) BOOL undimScreen; // ivar: _undimScreen
@property (retain, nonatomic) NSNumber *userId; // ivar: _userId




@end


#endif