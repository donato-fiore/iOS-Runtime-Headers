// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCOMPONENTDATASOURCEATTACHCONTROLLER_H
#define CKCOMPONENTDATASOURCEATTACHCONTROLLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CKComponentDataSourceAttachController : NSObject {
    NSMutableDictionary *_scopeIdentifierToAttachedViewMap;
}




-(id)attachStateForScopeIdentifier:(int)arg0 ;
-(id)init;
-(void)_detachComponentLayoutFromView:(id)arg0 ;
-(void)attachComponentLayout:(struct CKComponentLayout )arg0 withScopeIdentifier:(int)arg1 withBoundsAnimation:(struct CKComponentBoundsAnimation )arg2 toView:(id)arg3 ;
-(void)dealloc;
-(void)detachComponentLayoutWithScopeIdentifier:(int)arg0 ;


@end


#endif