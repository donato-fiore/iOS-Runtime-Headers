// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PADPRINTREPLAYREQUEST_H
#define PADPRINTREPLAYREQUEST_H

@class NSString, NSArray;
@protocol PADVNRequestProtocol, PADModelLoader, PADAuditDataRepository;

#import <Foundation/Foundation.h>


@interface PADPrintReplayRequest : NSObject <PADVNRequestProtocol>

 {
    id<PADModelLoader> *_models;
    id<PADAuditDataRepository> *_audit;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *results; // ivar: _results
@property (readonly) Class superclass;


-(BOOL)_doesNotMeetPoseRequirement:(id)arg0 ;
-(CGFloat)_dispatchPRDRequestStage1ForFrame:(id)arg0 error:(*id)arg1 ;
-(CGFloat)_dispatchPRDRequestStage2ForFrame:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)_auditStorePRDBuffer:(struct __CVBuffer *)arg0 name:(id)arg1 ;
-(void)_detectFaceBounds:(id)arg0 error:(*id)arg1 ;
-(void)performOn:(id)arg0 error:(*id)arg1 ;


@end


#endif