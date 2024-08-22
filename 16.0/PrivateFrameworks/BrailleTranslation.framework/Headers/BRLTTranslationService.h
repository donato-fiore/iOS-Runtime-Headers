// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRLTTRANSLATIONSERVICE_H
#define BRLTTRANSLATIONSERVICE_H

@class NSXPCConnection, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BRLTTranslationService : NSObject

@property (nonatomic) BOOL interrupted; // ivar: _interrupted
@property (nonatomic, getter=isInvalid) BOOL invalid; // ivar: _invalid
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic, getter=isLoopback) BOOL loopback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSXPCConnection *queue_connection; // ivar: _queue_connection
@property (readonly, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier


+(id)connectionForLoopbackService:(id)arg0 ;
+(id)connectionForServiceIdentifier:(id)arg0 ;
+(id)connections;
+(id)serviceForIdentifier:(id)arg0 ;
+(id)serviceForIdentifier:(id)arg0 loopback:(BOOL)arg1 ;
-(id)description;
-(id)initWithServiceIdentifier:(id)arg0 connection:(id)arg1 ;
-(void)brailleForText:(id)arg0 parameters:(id)arg1 withReply:(id)arg2 ;
-(void)textForBraille:(id)arg0 parameters:(id)arg1 withReply:(id)arg2 ;


@end


#endif