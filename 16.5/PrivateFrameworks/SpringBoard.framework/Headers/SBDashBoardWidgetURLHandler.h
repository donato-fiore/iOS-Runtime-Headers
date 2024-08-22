// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDASHBOARDWIDGETURLHANDLER_H
#define SBDASHBOARDWIDGETURLHANDLER_H

@class NSString;
@protocol CSWidgetURLHandling;

#import <Foundation/Foundation.h>


@interface SBDashBoardWidgetURLHandler : NSObject <CSWidgetURLHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)openURL:(id)arg0 ;


@end


#endif