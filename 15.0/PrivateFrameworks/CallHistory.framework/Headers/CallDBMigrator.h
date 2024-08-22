// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALLDBMIGRATOR_H
#define CALLDBMIGRATOR_H

@class NSXPCConnection, NSXPCInterface;

#import <Foundation/Foundation.h>


@interface CallDBMigrator : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
}




-(id)init;
-(void)migrate:(id)arg0 queue:(id)arg1 block:(id)arg2 ;


@end


#endif