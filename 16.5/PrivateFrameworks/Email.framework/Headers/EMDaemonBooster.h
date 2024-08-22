// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMDAEMONBOOSTER_H
#define EMDAEMONBOOSTER_H

@class NSString, NSProgress;
@protocol EFLoggable;

#import <Foundation/Foundation.h>

#import "EMRemoteConnection.h"

@interface EMDaemonBooster : NSObject <EFLoggable>



@property (retain, nonatomic) EMRemoteConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *loggingDescription; // ivar: _loggingDescription
@property (retain, nonatomic) NSProgress *remoteBoost; // ivar: _remoteBoost
@property (readonly) Class superclass;


+(id)log;
-(id)_newRemoteBoost;
-(id)initWithConnection:(id)arg0 description:(id)arg1 ;
-(void)dealloc;


@end


#endif