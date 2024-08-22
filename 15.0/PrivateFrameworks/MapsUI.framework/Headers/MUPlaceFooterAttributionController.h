// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACEFOOTERATTRIBUTIONCONTROLLER_H
#define MUPLACEFOOTERATTRIBUTIONCONTROLLER_H

@class UIView, NSArray;

#import <Foundation/Foundation.h>

#import "MUPlaceLinkFooterAttributionView.h"

@interface MUPlaceFooterAttributionController : NSObject {
    MUPlaceLinkFooterAttributionView *_attributionButton;
}


@property (copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (readonly, nonatomic) UIView *attributionView;
@property (copy, nonatomic) NSArray *providerNames; // ivar: _providerNames


+(id)attributionControllerForMapItem:(id)arg0 ;
+(id)attributionControllerForMapItemAttribution:(id)arg0 ;
+(id)transitAttributionControllerForMapItem:(id)arg0 transitLine:(id)arg1 ;
-(id)initWithProviderNames:(id)arg0 ;
-(void)_attributionTapped;
-(void)_setupAttribution;
-(void)_updateTitle;


@end


#endif