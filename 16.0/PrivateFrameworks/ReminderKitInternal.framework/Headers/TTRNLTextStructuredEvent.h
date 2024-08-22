// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTRNLTEXTSTRUCTUREDEVENT_H
#define TTRNLTEXTSTRUCTUREDEVENT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "TTRNLTextStructuredEventRecurrentEvent.h"

@interface TTRNLTextStructuredEvent : NSObject

@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) TTRNLTextStructuredEventRecurrentEvent *recurrentEvent;
@property (nonatomic) *void structuredEvent; // ivar: _structuredEvent


-(id)initWithStructuredEvent:(*void)arg0 ;
-(void)dealloc;


@end


#endif