// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIIDSIDQUERYCONTROLLERWRAPPER_H
#define CNUIIDSIDQUERYCONTROLLERWRAPPER_H

@class IDSIDQueryController;
@protocol CNUIIDSIDQueryControllerWrapper;

#import <Foundation/Foundation.h>


@interface CNUIIDSIDQueryControllerWrapper : NSObject <CNUIIDSIDQueryControllerWrapper>



@property (readonly, nonatomic) IDSIDQueryController *controller; // ivar: _controller


-(BOOL)refreshIDStatusForDestinations:(id)arg0 service:(id)arg1 listenerID:(id)arg2 queue:(id)arg3 completionBlock:(id)arg4 ;
-(id)initWithController:(id)arg0 ;


@end


#endif