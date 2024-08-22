// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPHOMEFACEIDENTIFICATIONTASK_H
#define VCPHOMEFACEIDENTIFICATIONTASK_H

@class NSData;
@protocol VCPMADTaskProtocol;

#import <Foundation/Foundation.h>


@interface VCPHomeFaceIdentificationTask : NSObject <VCPMADTaskProtocol>

 {
    id *_completionHandler;
    NSData *_faceCropData;
    atomic<bool> _started;
    atomic<bool> _cancel;
}




+(id)taskWithFaceCrop:(id)arg0 andCompletionHandler:(id)arg1 ;
-(BOOL)autoCancellable;
-(BOOL)run:(*id)arg0 ;
-(float)resourceRequirement;
-(id)initWithFaceCrop:(id)arg0 andCompletionHandler:(id)arg1 ;
-(int)run;
-(void)cancel;
-(void)configureRequest:(id)arg0 withRevision:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif