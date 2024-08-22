// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKFACEDETECTOPERATION_H
#define BKFACEDETECTOPERATION_H

@protocol BKFaceDetectOperationDelegate;


#import "BKPresenceDetectOperation.h"

@interface BKFaceDetectOperation : BKPresenceDetectOperation

@property (weak, nonatomic) NSObject<BKFaceDetectOperationDelegate> *delegate;
@property (nonatomic) BOOL highPriority; // ivar: _highPriority
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) CGFloat timeout; // ivar: _timeout


-(id)initWithDevice:(id)arg0 ;
-(void)startBioOperation:(BOOL)arg0 reply:(id)arg1 ;
-(void)statusMessage:(unsigned int)arg0 client:(NSUInteger)arg1 ;
-(void)statusMessage:(unsigned int)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;


@end


#endif