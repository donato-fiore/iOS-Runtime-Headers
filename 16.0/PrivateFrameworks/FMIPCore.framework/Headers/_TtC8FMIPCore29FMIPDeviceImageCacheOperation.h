// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8FMIPCORE29FMIPDEVICEIMAGECACHEOPERATION_H
#define _TTC8FMIPCORE29FMIPDEVICEIMAGECACHEOPERATION_H

@class NSOperation;



@interface _TtC8FMIPCore29FMIPDeviceImageCacheOperation : NSOperation {
    ? request;
    ? completion;
    ? _isFinished;
}


@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic) BOOL finished;


-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(id)init;
-(void)main;
-(void)start;


@end


#endif