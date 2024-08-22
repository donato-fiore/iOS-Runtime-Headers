// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLOADABLEDATACOMPONENT_H
#define WFLOADABLEDATACOMPONENT_H



#import "CKComponent.h"
#import "WFActivityIndicatorComponent.h"

@interface WFLoadableDataComponent : CKComponent {
    WFActivityIndicatorComponent *_loadingComponent;
}


@property (readonly, nonatomic) CKComponent *controlComponent; // ivar: _controlComponent
@property (readonly, nonatomic) BOOL isLoading; // ivar: _isLoading


+(id)newWithLoading:(BOOL)arg0 controlComponent:(id)arg1 size:(struct CKComponentSize *)arg2 ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 ;


@end


#endif