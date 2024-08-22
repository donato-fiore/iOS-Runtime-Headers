// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLTIMELINEOPERATION_H
#define TLTIMELINEOPERATION_H

@protocol TLIdentifiable;


#import "TLOperation.h"

@interface TLTimelineOperation : TLOperation

@property (readonly, nonatomic) NSObject<TLIdentifiable> *identifiable; // ivar: _identifiable
@property (copy) id *operationCompletionBlock;
@property (copy) id *timelineOperationCompletionBlock;


-(id)initWithIdentifiable:(id)arg0 ;


@end


#endif