// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFASSOCIATIONCONTEXTQUEUE_H
#define WFASSOCIATIONCONTEXTQUEUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface WFAssociationContextQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue; // ivar: _queue


-(id)init;
-(id)peek;
-(id)pop;
-(void)_dumpQueue;
-(void)push:(id)arg0 ;
-(void)removeAll;


@end


#endif