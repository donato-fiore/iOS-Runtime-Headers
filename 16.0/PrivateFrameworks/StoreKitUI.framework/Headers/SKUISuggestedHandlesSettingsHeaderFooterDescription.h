// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISUGGESTEDHANDLESSETTINGSHEADERFOOTERDESCRIPTION_H
#define SKUISUGGESTEDHANDLESSETTINGSHEADERFOOTERDESCRIPTION_H

@class NSArray;
@protocol SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate;


#import "SKUISettingsHeaderFooterDescription.h"
#import "SKUIClientContext.h"

@interface SKUISuggestedHandlesSettingsHeaderFooterDescription : SKUISettingsHeaderFooterDescription {
    SKUIClientContext *_clientContext;
    NSArray *_suggestedHandles;
}


@property (weak, nonatomic) NSObject<SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> *delegate; // ivar: _delegate


-(Class)_viewClassForSettingsHeaderFooterDescription:(id)arg0 ;
-(id)helpText;
-(id)initWithSuggestedHandles:(id)arg0 clientContext:(id)arg1 delegate:(id)arg2 ;
-(id)suggestedHandles;
-(void)selectedHandleAtIndex:(NSUInteger)arg0 ;


@end


#endif