// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCVIEWRENDERERDELEGATE_H
#define CCVIEWRENDERERDELEGATE_H

@protocol CCViewRendererDelegateInterface;

#import <Foundation/Foundation.h>

#import "CCVegaRenderer.h"

@interface CCViewRendererDelegate : NSObject <CCViewRendererDelegateInterface>



@property (weak) CCVegaRenderer *vegaRenderer; // ivar: vegaRenderer


-(id)initWithVegaRenderer:(id)arg0 ;
-(void)loadURL:(id)arg0 options:(id)arg1 withCallback:(id)arg2 ;
-(void)updateNativeView;


@end


#endif