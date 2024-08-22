// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACCAPPLINKSICONINFO_H
#define ACCAPPLINKSICONINFO_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface ACCAppLinksIconInfo : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)sharedManager;
-(id)_init;
-(id)init;
-(void)getIconDataForBundleID:(id)arg0 forIconSize:(CGFloat)arg1 withReply:(id)arg2 ;


@end


#endif