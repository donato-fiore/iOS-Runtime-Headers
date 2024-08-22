// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEFOOTERATTRIBUTIONCONTROLLER_H
#define MUPLACEFOOTERATTRIBUTIONCONTROLLER_H

@class UIView, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "MULinkView.h"

@interface MUPlaceFooterAttributionController : NSObject {
    MULinkView *_attributionView;
}


@property (copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (readonly, nonatomic) UIView *attributionView;
@property (readonly, nonatomic) NSString *formatString; // ivar: _formatString
@property (readonly, nonatomic, getter=isInteractable) BOOL interactable; // ivar: _interactable
@property (copy, nonatomic) NSArray *providerNames; // ivar: _providerNames


+(id)attributionControllerForMapItem:(id)arg0 ;
+(id)attributionControllerForMapItemAttribution:(id)arg0 ;
+(id)transitAttributionControllerForMapItem:(id)arg0 transitLine:(id)arg1 ;
+(id)vendorAttributionFormatString;
-(id)initWithFormatString:(id)arg0 providerNames:(id)arg1 isInteractable:(BOOL)arg2 ;
-(void)_attributionTapped;
-(void)_setupAttribution;
-(void)_updateTitle;


@end


#endif