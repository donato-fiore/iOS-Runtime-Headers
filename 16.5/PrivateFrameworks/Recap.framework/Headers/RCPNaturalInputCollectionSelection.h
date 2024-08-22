// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCPNATURALINPUTCOLLECTIONSELECTION_H
#define RCPNATURALINPUTCOLLECTIONSELECTION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RCPNaturalInputCollectionSelection : NSObject <NSCopying>



@property (readonly) CGPoint direction; // ivar: _direction
@property (readonly) CGPoint location; // ivar: _location
@property (readonly) CGFloat zDirection; // ivar: _zDirection
@property (readonly) CGFloat zPosition; // ivar: _zPosition


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLocation:(struct CGPoint )arg0 zPosition:(CGFloat)arg1 ;
-(id)initWithLocation:(struct CGPoint )arg0 zPosition:(CGFloat)arg1 direction:(struct CGPoint )arg2 zDirection:(CGFloat)arg3 ;


@end


#endif