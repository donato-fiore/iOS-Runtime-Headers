// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _REELEMENTRANKERWRAPPER_H
#define _REELEMENTRANKERWRAPPER_H

@class NSString;
@protocol REMLElementRanker, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "REMLElementComparator.h"

@interface _REElementRankerWrapper : NSObject <REMLElementRanker>



@property (retain, nonatomic) REMLElementComparator *comparator; // ivar: _comparator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *featureMapGenerator; // ivar: _featureMapGenerator
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)shouldHideElement:(id)arg0 ;


@end


#endif