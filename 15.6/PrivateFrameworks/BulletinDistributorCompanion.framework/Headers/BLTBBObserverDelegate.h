// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTBBOBSERVERDELEGATE_H
#define BLTBBOBSERVERDELEGATE_H

@class NSString;
@protocol BBObserverDelegate, BLTBBObserverDelegateDelegate;

#import <Foundation/Foundation.h>


@interface BLTBBObserverDelegate : NSObject <BBObserverDelegate>



@property (weak) NSObject<BBObserverDelegate> *actualDelegate; // ivar: _actualDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BLTBBObserverDelegateDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)observer:(id)arg0 noteServerConnectionStateChanged:(BOOL)arg1 ;


@end


#endif