// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXSTORYOBSERVATION_H
#define _PXSTORYOBSERVATION_H

@class NSString;
@protocol PXChangeObserver, PXStoryStateWatchingRequest;

#import <Foundation/Foundation.h>

#import "PXObservable.h"

@interface _PXStoryObservation : NSObject <PXChangeObserver, PXStoryStateWatchingRequest>



@property (copy, nonatomic) id *changeHandler; // ivar: _changeHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) PXObservable *observable; // ivar: _observable
@property (readonly) Class superclass;


-(id)initWithObservable:(id)arg0 changeHandler:(id)arg1 ;
-(void)cancel;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif