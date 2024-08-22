// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSMIGRATOR_H
#define SSMIGRATOR_H


#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"

@interface SSMigrator : NSObject {
    SSXPCConnection *_connection;
}




-(id)init;
-(void)performMigration:(NSUInteger)arg0 completionBlock:(id)arg1 ;


@end


#endif