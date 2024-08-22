// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSDISPATCH_H
#define SBSDISPATCH_H

@class NSString;
@protocol SBSDispatchProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBSDispatch : NSObject <SBSDispatchProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 ;
-(void)async:(id)arg0 ;
-(void)sync:(id)arg0 ;


@end


#endif