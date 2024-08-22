// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSCLIENT_H
#define CLSCLIENT_H

@class NSString;
@protocol CLSClientInterface, CLSClientDelegate;

#import <Foundation/Foundation.h>


@interface CLSClient : NSObject <CLSClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CLSClientDelegate> *delagate; // ivar: _delagate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)clientRemote_databaseRecreated;


@end


#endif