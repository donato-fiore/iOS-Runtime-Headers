// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __HMFLOCATIONAUTHORIZATIONREQUEST_H
#define __HMFLOCATIONAUTHORIZATIONREQUEST_H

@class HMFLocationManagerOperation, NSString;
@protocol HMFLogging;



@interface __HMFLocationAuthorizationRequest : HMFLocationManagerOperation <HMFLogging>

 {
    BOOL _requested;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSInteger type; // ivar: _type


+(id)logCategory;
-(id)initWithAuthorization:(id)arg0 ;
-(id)initWithTimeout:(CGFloat)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 authorization:(id)arg1 ;
-(void)dealloc;
-(void)main;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif