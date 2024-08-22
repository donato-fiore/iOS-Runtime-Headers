// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEDSHARINGINBOUND_H
#define DEDSHARINGINBOUND_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "DEDSharingConnection.h"
#import "DEDController.h"

@interface DEDSharingInbound : NSObject

@property (weak) DEDSharingConnection *connection; // ivar: _connection
@property (weak) DEDController *delegate; // ivar: _delegate
@property (retain) NSObject<OS_os_log> *log; // ivar: _log


-(id)init;
-(id)initWithController:(id)arg0 sharingConnection:(id)arg1 ;
-(void)handleObject:(id)arg0 forSFSession:(id)arg1 ;
-(void)handleObject:(id)arg0 forSFSession:(id)arg1 forBugSession:(id)arg2 callingDevice:(id)arg3 ;
-(void)handleRequest:(id)arg0 forSFSession:(id)arg1 completion:(id)arg2 ;


@end


#endif