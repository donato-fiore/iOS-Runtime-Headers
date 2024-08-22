// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUDISPLAYTILETRANSFORM_H
#define PUDISPLAYTILETRANSFORM_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PUModelTileTransform.h"

@interface PUDisplayTileTransform : NSObject <NSCopying>



@property (nonatomic, setter=_setDisplaySize:) CGSize _displaySize; // ivar: __displaySize
@property (nonatomic, setter=_setInitialScale:) CGFloat _initialScale; // ivar: __initialScale
@property (nonatomic, setter=_setInitialSize:) CGSize _initialSize; // ivar: __initialSize
@property (nonatomic, setter=_setAffineTransform:) CGAffineTransform affineTransform; // ivar: _affineTransform
@property (nonatomic, setter=_setHasUserInput:) BOOL hasUserInput; // ivar: _hasUserInput
@property (readonly, nonatomic) PUModelTileTransform *modelTileTransform;
@property (nonatomic, setter=_setTransformPadding:) CGSize transformPadding; // ivar: _transformPadding
@property (copy, nonatomic, setter=_setUserInputOriginIdentifier:) NSString *userInputOriginIdentifier; // ivar: _userInputOriginIdentifier


+(id)displayTileTransformWithModelTileTransform:(id)arg0 initialScale:(CGFloat)arg1 initialSize:(struct CGSize )arg2 displaySize:(struct CGSize )arg3 secondaryDisplayTileTransform:(id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)newDisplayTileTransformWithUserAffineTransform:(struct CGAffineTransform )arg0 userInputOriginIdentifier:(id)arg1 ;


@end


#endif