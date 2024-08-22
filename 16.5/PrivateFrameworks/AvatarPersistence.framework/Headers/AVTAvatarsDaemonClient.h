// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARSDAEMONCLIENT_H
#define AVTAVATARSDAEMONCLIENT_H

@protocol AVTAvatarsDaemon, AVTUILogger;

#import <Foundation/Foundation.h>


@interface AVTAvatarsDaemonClient : NSObject <AVTAvatarsDaemon>



@property (readonly, copy, nonatomic) id *connectionFactory; // ivar: _connectionFactory
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger


// -(id)initWithConnectionFactory:(id)arg0 logger:(unk)arg1  ;
-(id)initWithLogger:(id)arg0 ;
-(void)checkIn;
-(void)performWorkWithConnection:(id)arg0 ;
-(void)performWorkWithSynchronousProxy:(id)arg0 ;


@end


#endif