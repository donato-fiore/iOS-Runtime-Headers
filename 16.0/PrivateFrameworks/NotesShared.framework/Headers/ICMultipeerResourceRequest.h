// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMULTIPEERRESOURCEREQUEST_H
#define ICMULTIPEERRESOURCEREQUEST_H

@class NSOperation, NSUUID, NSMutableSet;


#import "ICNote.h"

@interface ICMultipeerResourceRequest : NSOperation

@property (retain, nonatomic) NSUUID *deviceUUID; // ivar: _deviceUUID
@property (retain, nonatomic) NSMutableSet *failedDevices; // ivar: _failedDevices
@property (nonatomic) BOOL isExecuting; // ivar: _isExecuting
@property (nonatomic) BOOL isFinished; // ivar: _isFinished
@property BOOL isSuccessful; // ivar: _isSuccessful
@property (readonly) ICNote *note; // ivar: _note


-(BOOL)isConcurrent;
-(id)init;
-(void)didFinish:(id)arg0 ;
-(void)startRequest;


@end


#endif