// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLHARVESTER_H
#define CLHARVESTER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface CLHarvester : NSObject {
    NSXPCConnection *_connection;
}




-(id)currentStateDictionary;
-(void)connect;
-(void)dealloc;
-(void)submitSample:(id)arg0 ;


@end


#endif