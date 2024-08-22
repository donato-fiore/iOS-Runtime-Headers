// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPPROGRESS_H
#define FPPROGRESS_H

@class NSProgress, NSOperation;



@interface FPProgress : NSProgress {
    NSOperation *_operation;
}




-(id)initWithOperation:(id)arg0 ;
-(void)cancel;


@end


#endif