// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CATPROXYWAITTOKEN_H
#define _CATPROXYWAITTOKEN_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface _CATProxyWaitToken : NSObject {
    uint8_t mFinished;
    NSObject<OS_dispatch_group> *mGroup;
}


@property (readonly, nonatomic) BOOL isExclusive; // ivar: _isExclusive
@property (readonly, nonatomic) id *resourceProxy; // ivar: _resourceProxy


-(id)initWithExclusive:(BOOL)arg0 group:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)invalidate;
-(void)notifyWithResourceProxy:(id)arg0 ;


@end


#endif