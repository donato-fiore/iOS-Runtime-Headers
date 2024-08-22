// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JEBROTLIENCODER_H
#define JEBROTLIENCODER_H


#import <Foundation/Foundation.h>


@interface JEBrotliEncoder : NSObject

@property (readonly, nonatomic) *BrotliEncoderStateStruct encoder; // ivar: _encoder
@property (readonly, nonatomic) BOOL isFinished;
@property (nonatomic) unsigned int quality; // ivar: _quality
@property (nonatomic) unsigned int sizeHint; // ivar: _sizeHint


-(BOOL)compressStreamWithOperation:(NSInteger)arg0 availableIn:(*NSUInteger)arg1 nextIn:(*char *)arg2 availableOut:(*NSUInteger)arg3 nextOut:(*char *)arg4 ;
-(id)init;
-(void)dealloc;


@end


#endif