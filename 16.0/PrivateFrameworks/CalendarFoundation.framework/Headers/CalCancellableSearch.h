// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALCANCELLABLESEARCH_H
#define CALCANCELLABLESEARCH_H


#import <Foundation/Foundation.h>


@interface CalCancellableSearch : NSObject

@property (copy, nonatomic) id *cancellationBlock; // ivar: _cancellationBlock


-(id)initWithCancellationBlock:(id)arg0 ;
-(void)cancel;


@end


#endif