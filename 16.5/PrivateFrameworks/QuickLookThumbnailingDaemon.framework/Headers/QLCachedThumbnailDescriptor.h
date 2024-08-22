// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLCACHEDTHUMBNAILDESCRIPTOR_H
#define QLCACHEDTHUMBNAILDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface QLCachedThumbnailDescriptor : NSObject <NSCopying>



@property (readonly) NSUInteger badgeType; // ivar: _badgeType
@property NSUInteger externalGeneratorDataHash; // ivar: _externalGeneratorDataHash
@property (readonly) BOOL iconMode; // ivar: _iconMode
@property NSInteger iconVariant; // ivar: _iconVariant
@property int interpolationQuality; // ivar: _interpolationQuality
@property (readonly) float size; // ivar: _size


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSize:(float)arg0 iconMode:(BOOL)arg1 badgeType:(NSUInteger)arg2 ;
-(id)initWithSize:(float)arg0 iconMode:(BOOL)arg1 badgeType:(NSUInteger)arg2 externalGeneratorDataHash:(NSUInteger)arg3 ;
-(id)initWithThumbnailRequest:(id)arg0 ;


@end


#endif