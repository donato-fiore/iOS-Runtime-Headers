// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19APPSTOREKITINTERNAL29LAYOUTCONTEXTTRAITENVIRONMENT_H
#define _TTC19APPSTOREKITINTERNAL29LAYOUTCONTEXTTRAITENVIRONMENT_H

@class UITraitCollection;
@protocol UITraitEnvironment;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal29LayoutContextTraitEnvironment : NSObject <UITraitEnvironment>



@property (nonatomic, readonly) UITraitCollection *traitCollection; // ivar: traitCollection


-(id)init;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif