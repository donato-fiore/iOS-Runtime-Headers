// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRULONGPRESSGESTURERECOGNIZER_H
#define MRULONGPRESSGESTURERECOGNIZER_H

@class UILongPressGestureRecognizer, NSMutableArray;



@interface MRULongPressGestureRecognizer : UILongPressGestureRecognizer

@property (retain, nonatomic) NSMutableArray *cancellationHandlers; // ivar: _cancellationHandlers


-(void)addCancellationHandler:(id)arg0 ;
-(void)setState:(NSInteger)arg0 ;


@end


#endif