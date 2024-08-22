// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDCANCELTOKEN_H
#define CKDCANCELTOKEN_H

@protocol CKDCancelling;

#import <Foundation/Foundation.h>


@interface CKDCancelToken : NSObject <CKDCancelling>

 {
    BOOL _isCancelled;
}


@property (copy, nonatomic) id *cancelAction; // ivar: _cancelAction


-(BOOL)isCancelled;
-(void)cancel;


@end


#endif