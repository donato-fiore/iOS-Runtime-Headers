// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACTIONCELLACCESSORY_H
#define ACTIONCELLACCESSORY_H

@class UICellAccessoryCustomView;



@interface ActionCellAccessory : UICellAccessoryCustomView {
    id *_visibilityProvider;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAction:(id)arg0 visibilityProvider:(id)arg1 ;
-(void)applyContentConfiguration:(id)arg0 forState:(id)arg1 ;


@end


#endif