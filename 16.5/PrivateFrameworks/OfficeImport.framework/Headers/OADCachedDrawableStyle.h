// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADCACHEDDRAWABLESTYLE_H
#define OADCACHEDDRAWABLESTYLE_H


#import <Foundation/Foundation.h>


@interface OADCachedDrawableStyle : NSObject

@property (readonly, nonatomic) int fillCategory; // ivar: mFillCategory
@property (readonly, nonatomic) NSUInteger fillIndex; // ivar: mFillIndex
@property (readonly, nonatomic) unsigned char reflectionOpacity; // ivar: mReflectionOpacity
@property (readonly, nonatomic) NSUInteger shadowIndex; // ivar: mShadowIndex
@property (readonly, nonatomic) NSUInteger strokeIndex; // ivar: mStrokeIndex
@property (readonly, nonatomic) NSUInteger textStyleIndex; // ivar: mTextStyleIndex


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithFillCategory:(int)arg0 mFillIndex:(NSUInteger)arg1 strokeIndex:(NSUInteger)arg2 shadowIndex:(NSUInteger)arg3 reflectionOpacity:(unsigned char)arg4 textStyleIndex:(NSUInteger)arg5 ;


@end


#endif