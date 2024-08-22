// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMCANCELATIONTOKEN_H
#define FMCANCELATIONTOKEN_H

@class NSMutableArray, NSString;
@protocol FMCancelable;

#import <Foundation/Foundation.h>


@interface FMCancelationToken : NSObject <FMCancelable>

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
-(void)addCancelable:(id)arg0 ;
-(void)addCancelationBlock:(id)arg0 ;
-(void)callCancelationBlocks:(id)arg0 ;
-(void)cancel;


@end


#endif