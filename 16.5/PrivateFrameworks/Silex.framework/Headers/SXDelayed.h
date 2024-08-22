// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDELAYED_H
#define SXDELAYED_H


#import <Foundation/Foundation.h>

#import "SXDelayed.h"

@interface SXDelayed : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (nonatomic) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) SXDelayed *strongReference; // ivar: _strongReference


// +(id)execute:(id)arg0 delay:(unk)arg1  ;
// -(id)initWithBlock:(id)arg0 delay:(unk)arg1  ;
-(void)cancel;
-(void)invoke;


@end


#endif