// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFCANCELATIONTOKEN_H
#define SBFCANCELATIONTOKEN_H

@class NSMutableArray, NSString;
@protocol SBFCancelable;

#import <Foundation/Foundation.h>


@interface SBFCancelationToken : NSObject <SBFCancelable>

 {
    BOOL _isCanceled;
    NSMutableArray *_cancelationBlocks;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)tokenWithCancelationBlock:(id)arg0 ;
+(id)tokenWrappingCancelable:(id)arg0 ;
-(BOOL)isCanceled;
-(id)init;
-(id)nts_cancel;
-(void)addCancelationBlock:(id)arg0 ;
-(void)callCancelationBlocks:(id)arg0 ;
-(void)cancel;


@end


#endif