// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC19APPSTOREKITINTERNAL8PAGEGRID_H
#define _TTC19APPSTOREKITINTERNAL8PAGEGRID_H

@class NSString, UITraitCollection;
@protocol UITraitEnvironment;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal8PageGrid : NSObject <UITraitEnvironment>

 {
    ? name;
    ? direction;
    ? containerWidth;
    ? containerHeight;
    ? safeAreaInsets;
    ? activeBreakPoint;
    ? breakpoints;
    ? requiresAdditionalSafeAreaMargins;
    ? columnCount;
    ? columnWidth;
    ? largestPossibleColumnWidth;
    ? interColumnSpace;
    ? interRowSpace;
    ? horizontalMargins;
    ? horizontalDirectionalMargins;
}


@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UITraitCollection *traitCollection; // ivar: traitCollection


-(id)init;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif