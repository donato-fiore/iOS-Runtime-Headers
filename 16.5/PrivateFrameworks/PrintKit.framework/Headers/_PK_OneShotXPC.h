// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PK_ONESHOTXPC_H
#define _PK_ONESHOTXPC_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface _PK_OneShotXPC : NSObject

@property (retain, nonatomic) NSXPCConnection *pkBrowseConnection; // ivar: _pkBrowseConnection


+(BOOL)withTimeout:(int)arg0 doSyncronousOneShot:(id)arg1 ;
+(void)doOneShot:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif