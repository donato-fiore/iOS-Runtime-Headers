// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMAINDISPLAYWINDOWLAYOUTSTRATEGY_H
#define SBMAINDISPLAYWINDOWLAYOUTSTRATEGY_H

@class NSString;
@protocol SBWindowLayoutStrategy;

#import <Foundation/Foundation.h>


@interface SBMainDisplayWindowLayoutStrategy : NSObject <SBWindowLayoutStrategy>

 {
    BOOL _clip;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_strategyWithClipping:(BOOL)arg0 ;
+(id)clipStrategy;
+(id)noClipStrategy;
-(BOOL)shouldClipForWindow:(id)arg0 ;
-(id)_init;
-(struct CGRect )frameWithInterfaceOrientation:(NSInteger)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif