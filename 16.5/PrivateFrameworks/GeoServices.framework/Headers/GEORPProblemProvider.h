// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPPROBLEMPROVIDER_H
#define GEORPPROBLEMPROVIDER_H

@class NSString;
@protocol GEOProtobufSessionTaskDelegate;

#import <Foundation/Foundation.h>

#import "GEOProtobufSession.h"
#import "GEOProtobufSessionTask.h"

@interface GEORPProblemProvider : NSObject <GEOProtobufSessionTaskDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) GEOProtobufSession *protobufSession; // ivar: _protobufSession
@property (copy, nonatomic) id *statusErrorHandler; // ivar: _statusErrorHandler
@property (copy, nonatomic) id *statusFinishedHandler; // ivar: _statusFinishedHandler
@property (retain, nonatomic) GEOProtobufSessionTask *statusTask; // ivar: _statusTask
@property (copy, nonatomic) id *submissionErrorHandler; // ivar: _submissionErrorHandler
@property (copy, nonatomic) id *submissionFinishedHandler; // ivar: _submissionFinishedHandler
@property (retain, nonatomic) GEOProtobufSessionTask *submissionTask; // ivar: _submissionTask
@property (readonly) Class superclass;


-(id)cancelError;
-(id)init;
-(void)cancelRequest;
-(void)didCompleteStatusTask;
-(void)didCompleteSubmissionTask;
-(void)protobufSession:(id)arg0 didCompleteTask:(id)arg1 ;
// -(void)startStatusRequest:(id)arg0 finished:(id)arg1 error:(unk)arg2  ;
// -(void)startSubmissionRequest:(id)arg0 finished:(id)arg1 error:(unk)arg2  ;


@end


#endif