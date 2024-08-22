// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPCSUZELEASESESSIONINFO_H
#define _MPCSUZELEASESESSIONINFO_H

@class ICSuzeLeaseSession;

#import <Foundation/Foundation.h>

#import "MPCSuzeLeaseSession.h"

@interface _MPCSuzeLeaseSessionInfo : NSObject

@property (nonatomic) NSInteger clientCount; // ivar: _clientCount
@property (readonly, nonatomic) ICSuzeLeaseSession *icLeaseSession; // ivar: _icLeaseSession
@property (readonly, nonatomic) MPCSuzeLeaseSession *mpcLeaseSession; // ivar: _mpcLeaseSession
@property (nonatomic) BOOL shouldStopWhenFinished; // ivar: _shouldStopWhenFinished


-(id)initWithICLeaseSession:(id)arg0 ;


@end


#endif