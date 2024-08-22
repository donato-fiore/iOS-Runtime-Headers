// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISHARINGCONTROLLERACTIVITYITEMSOURCE_H
#define _UISHARINGCONTROLLERACTIVITYITEMSOURCE_H

@class NSString;
@protocol UIActivityItemSource;

#import <Foundation/Foundation.h>

#import "UICloudSharingController.h"

@interface _UISharingControllerActivityItemSource : NSObject <UIActivityItemSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UICloudSharingController *viewController; // ivar: _viewController


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;


@end


#endif