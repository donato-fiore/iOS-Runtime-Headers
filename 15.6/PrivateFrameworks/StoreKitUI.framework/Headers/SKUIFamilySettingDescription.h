// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIFAMILYSETTINGDESCRIPTION_H
#define SKUIFAMILYSETTINGDESCRIPTION_H



#import "SKUISettingDescription.h"
#import "SKUISettingsFamilyViewStateCoordinator.h"

@interface SKUIFamilySettingDescription : SKUISettingDescription {
    SKUISettingsFamilyViewStateCoordinator *_viewStateCoordinator;
}


@property (readonly, nonatomic) NSInteger viewState; // ivar: _viewState


+(Class)_viewClassForSettingDescription:(id)arg0 ;
-(BOOL)_initiallyHidden;
-(id)initWithViewElement:(id)arg0 parent:(id)arg1 ;
-(void)_updateViewState;
-(void)_updateWithViewState:(NSInteger)arg0 ;
-(void)handleSelectionOnCompletion:(id)arg0 ;


@end


#endif