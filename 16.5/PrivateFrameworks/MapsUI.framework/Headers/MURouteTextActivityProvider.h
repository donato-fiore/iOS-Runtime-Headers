// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUROUTETEXTACTIVITYPROVIDER_H
#define MUROUTETEXTACTIVITYPROVIDER_H

@class NSString;
@protocol UIActivityItemSource;


#import "MURouteActivityProvider.h"

@interface MURouteTextActivityProvider : MURouteActivityProvider <UIActivityItemSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;


@end


#endif