// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSSSTYLEPROMISE_H
#define TSSSTYLEPROMISE_H

@class NSMutableArray;
@protocol TSSStyleObject;

#import <Foundation/Foundation.h>

#import "TSSStyle.h"

@interface TSSStylePromise : NSObject <TSSStyleObject>

 {
    TSSStyle *_sourceStyle;
    NSMutableArray *_promisees;
}




+(id)promiseForStyle:(id)arg0 ;
-(id)initWithStyle:(id)arg0 ;
-(void)addPromisee:(id)arg0 ;
-(void)dealloc;
-(void)fulfillWithStyle:(id)arg0 ;


@end


#endif