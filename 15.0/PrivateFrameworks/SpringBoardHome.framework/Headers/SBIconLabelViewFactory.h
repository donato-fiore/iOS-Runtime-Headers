// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONLABELVIEWFACTORY_H
#define SBICONLABELVIEWFACTORY_H


#import <Foundation/Foundation.h>


@interface SBIconLabelViewFactory : NSObject



+(BOOL)canUseIconLabelView:(id)arg0 toDisplayLabelWithSettings:(id)arg1 imageParameters:(id)arg2 forIconView:(id)arg3 ;
+(BOOL)canUseIconSimpleLabelViewToDisplayLabelWithSettings:(id)arg0 imageParameters:(id)arg1 forIconView:(id)arg2 ;
+(id)iconLabelViewWithSettings:(id)arg0 imageParameters:(id)arg1 forIconView:(id)arg2 ;


@end


#endif