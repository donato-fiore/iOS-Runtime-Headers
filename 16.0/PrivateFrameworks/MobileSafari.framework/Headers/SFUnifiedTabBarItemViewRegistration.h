// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFUNIFIEDTABBARITEMVIEWREGISTRATION_H
#define SFUNIFIEDTABBARITEMVIEWREGISTRATION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SFUnifiedTabBarItemViewRegistration : NSObject {
    id *_configurationHandler;
    id *_viewProvider;
    NSMutableArray *_viewReuseStack;
}




-(id)createItemView;
-(id)dequeueOrCreateViewForItem:(id)arg0 isPreview:(BOOL)arg1 ;
// -(id)initWithViewProvider:(id)arg0 configurationHandler:(unk)arg1  ;
-(void)configureView:(id)arg0 forItem:(id)arg1 inArrangement:(id)arg2 isPreview:(BOOL)arg3 ;
-(void)enqueueItemView:(id)arg0 ;


@end


#endif