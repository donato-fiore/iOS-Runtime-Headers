// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXEXPECTATION_H
#define PXEXPECTATION_H

@class NSDate, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXExpectation : NSObject

@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)description;
-(id)init;
-(id)initWithLabelFormat:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 labelFormat:(id)arg1 ;
-(void)_performHandlerWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)fulfill;
// -(void)performWhenFulfilled:(id)arg0 timeout:(unk)arg1  ;


@end


#endif