// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXASSISTANTTRAITCOLLECTION_H
#define PXASSISTANTTRAITCOLLECTION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXAssistantTraitCollection : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat displayScale; // ivar: _displayScale
@property (readonly, nonatomic) BOOL isRTL; // ivar: _isRTL


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDisplayScale:(CGFloat)arg0 isRTL:(BOOL)arg1 ;


@end


#endif