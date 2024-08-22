// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTRIBUTIONSUPDATER_H
#define ICATTRIBUTIONSUPDATER_H


#import <Foundation/Foundation.h>

#import "ICAttributionLayoutManager.h"

@interface ICAttributionsUpdater : NSObject {
    ? filter;
}


@property (nonatomic) BOOL isSidebarHidden; // ivar: isSidebarHidden
@property (nonatomic, readonly) ICAttributionLayoutManager *layoutManager; // ivar: layoutManager


+(CGFloat)sidebarClosedRenderDelay;
+(CGFloat)sidebarOpenedRenderDelay;
-(id)init;


@end


#endif