// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTRANSACTIONALCOMPONENTDATASOURCEITEM_H
#define CKTRANSACTIONALCOMPONENTDATASOURCEITEM_H


#import <Foundation/Foundation.h>

#import "CKComponentScopeRoot.h"

@interface CKTransactionalComponentDataSourceItem : NSObject {
    CKComponentLayout _layout;
}


@property (readonly, nonatomic) CKComponentBoundsAnimation boundsAnimation; // ivar: _boundsAnimation
@property (readonly, nonatomic) id *model; // ivar: _model
@property (readonly, nonatomic) CKComponentScopeRoot *scopeRoot; // ivar: _scopeRoot


-(*void)layout;
-(id)initWithLayout:(*void)arg0 model:(id)arg1 scopeRoot:(id)arg2 boundsAnimation:(struct CKComponentBoundsAnimation )arg3 ;


@end


#endif