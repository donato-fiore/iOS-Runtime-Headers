// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKROUTETEXTACTIVITYPROVIDER_H
#define MKROUTETEXTACTIVITYPROVIDER_H

@class NSString;
@protocol UIActivityItemSource;


#import "MKRouteActivityProvider.h"

@interface MKRouteTextActivityProvider : MKRouteActivityProvider <UIActivityItemSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;


@end


#endif