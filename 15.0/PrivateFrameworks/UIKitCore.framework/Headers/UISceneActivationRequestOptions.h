// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISCENEACTIVATIONREQUESTOPTIONS_H
#define UISCENEACTIVATIONREQUESTOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIScene.h"

@interface UISceneActivationRequestOptions : NSObject <NSCopying>



@property (nonatomic) NSInteger _collectionJoinBehavior;
@property (nonatomic, setter=_setRequestFullscreen:) BOOL _requestFullscreen; // ivar: __requestFullscreen
@property (nonatomic) NSInteger collectionJoinBehavior; // ivar: _collectionJoinBehavior
@property (nonatomic) BOOL preserveLayout; // ivar: _preserveLayout
@property (retain, nonatomic) UIScene *requestingScene; // ivar: _requestingScene


-(id)_descriptionProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif