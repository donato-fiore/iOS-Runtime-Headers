// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCSUZELEASESESSION_H
#define MPCSUZELEASESESSION_H

@class ICSuzeLeaseSession;

#import <Foundation/Foundation.h>


@interface MPCSuzeLeaseSession : NSObject

@property (readonly, nonatomic) ICSuzeLeaseSession *icSuzeLeaseSession; // ivar: _icSuzeLeaseSession


-(id)initWithICSuzeLeaseSession:(id)arg0 ;
-(void)beginAutomaticallyRefreshingLease;
-(void)endAutomaticallyRefreshingLease;


@end


#endif