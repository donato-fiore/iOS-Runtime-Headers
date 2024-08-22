// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKSERVICEREQUEST_H
#define IKSERVICEREQUEST_H

@protocol IKServiceRequestDelegate;

#import <Foundation/Foundation.h>

#import "IKAppContext.h"
#import "IKServiceContext.h"

@interface IKServiceRequest : NSObject {
    int _state;
    ? _srDelegateFlags;
}


@property (readonly, weak, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (weak, nonatomic) NSObject<IKServiceRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) IKServiceContext *serviceContext; // ivar: _serviceContext


-(id)initWithAppContext:(id)arg0 serviceContext:(id)arg1 ;
-(void)_completedWithStatus:(NSInteger)arg0 errorDictionary:(id)arg1 ;
-(void)cancel;
-(void)send;


@end


#endif