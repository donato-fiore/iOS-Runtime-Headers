// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKORGANICIMAGELAYOUTRECIPE_H
#define CKORGANICIMAGELAYOUTRECIPE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface CKOrganicImageLayoutRecipe : NSObject

@property (retain, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (retain, nonatomic) NSNumber *groupMaxX; // ivar: _groupMaxX
@property (nonatomic) BOOL isLastItem; // ivar: _isLastItem
@property (nonatomic) CGFloat offset; // ivar: _offset
@property (nonatomic) CGFloat overlap; // ivar: _overlap
@property (retain, nonatomic) NSNumber *relativeGroupCenter; // ivar: _relativeGroupCenter
@property (nonatomic) CGFloat rotation; // ivar: _rotation
@property (nonatomic) CGSize targetSize; // ivar: _targetSize
@property (nonatomic) BOOL wantsShadow; // ivar: _wantsShadow


-(id)description;
-(id)initWithRotation:(CGFloat)arg0 offset:(CGFloat)arg1 targetSize:(struct CGSize )arg2 overlap:(CGFloat)arg3 wantsShadow:(BOOL)arg4 groupIdentifier:(id)arg5 ;


@end


#endif