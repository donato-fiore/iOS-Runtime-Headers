// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFCANCELLATIONHANDLER_H
#define CARPFCANCELLATIONHANDLER_H

@protocol CARPFCancellable;


#import "CARPFObject.h"

@interface CARPFCancellationHandler : CARPFObject <CARPFCancellable>

 {
    id *_block;
}




-(id)initWithBlock:(id)arg0 ;
-(void)cancel;


@end


#endif