// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDCANCELTOKENGROUP_H
#define CKDCANCELTOKENGROUP_H

@class NSMutableArray;
@protocol CKDCancelling;

#import <Foundation/Foundation.h>


@interface CKDCancelTokenGroup : NSObject <CKDCancelling>



@property (retain, nonatomic) NSMutableArray *cancelTokens; // ivar: _cancelTokens


-(id)init;
-(void)addCancelToken:(id)arg0 withOperation:(id)arg1 ;
-(void)cancel;
-(void)removeAllCancelTokens;
-(void)removeCancelToken:(id)arg0 ;


@end


#endif