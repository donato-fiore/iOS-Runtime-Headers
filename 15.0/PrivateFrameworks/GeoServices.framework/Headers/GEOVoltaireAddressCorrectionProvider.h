// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOVOLTAIREADDRESSCORRECTIONPROVIDER_H
#define GEOVOLTAIREADDRESSCORRECTIONPROVIDER_H

@class NSString;
@protocol GEOProtobufSessionTaskDelegate;

#import <Foundation/Foundation.h>

#import "GEOProtobufSessionTask.h"
#import "GEOProtobufSession.h"

@interface GEOVoltaireAddressCorrectionProvider : NSObject <GEOProtobufSessionTaskDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *initErrorHandler; // ivar: _initErrorHandler
@property (copy, nonatomic) id *initFinishedHandler; // ivar: _initFinishedHandler
@property (retain, nonatomic) GEOProtobufSessionTask *initializationTask; // ivar: _initializationTask
@property (readonly, nonatomic) GEOProtobufSession *protobufSession; // ivar: _protobufSession
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateErrorHandler; // ivar: _updateErrorHandler
@property (copy, nonatomic) id *updateFinishedHandler; // ivar: _updateFinishedHandler
@property (retain, nonatomic) GEOProtobufSessionTask *updateTask; // ivar: _updateTask


+(BOOL)acInitNeedsProxy;
+(BOOL)acUpdateNeedsProxy;
+(id)acInitURL;
+(id)acUpdateURL;
-(id)cancelError;
-(id)init;
-(void)cancelRequest;
-(void)didCompleteInitTask;
-(void)didCompleteUpdateTask;
-(void)protobufSession:(id)arg0 didCompleteTask:(id)arg1 ;
// -(void)startInitRequest:(id)arg0 finished:(id)arg1 error:(unk)arg2  ;
// -(void)startUpdateRequest:(id)arg0 finished:(id)arg1 error:(unk)arg2  ;


@end


#endif