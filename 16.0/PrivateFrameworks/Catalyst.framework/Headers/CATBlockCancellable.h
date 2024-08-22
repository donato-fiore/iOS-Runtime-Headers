// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATBLOCKCANCELLABLE_H
#define CATBLOCKCANCELLABLE_H

@protocol CATCancelable;

#import <Foundation/Foundation.h>


@interface CATBlockCancellable : NSObject <CATCancelable>



@property (copy, nonatomic) id *cancellationBlock; // ivar: _cancellationBlock


-(id)init;
-(id)initWithCancellables:(id)arg0 ;
-(id)initWithCancellationBlock:(id)arg0 ;
-(void)cancel;


@end


#endif