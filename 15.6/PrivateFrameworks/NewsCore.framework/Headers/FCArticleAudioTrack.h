// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCARTICLEAUDIOTRACK_H
#define FCARTICLEAUDIOTRACK_H

@protocol NSCopying, FCContentArchivable;

#import <Foundation/Foundation.h>

#import "FCAVAsset.h"
#import "FCContentArchive.h"

@interface FCArticleAudioTrack : NSObject <NSCopying, FCContentArchivable>



@property (readonly, nonatomic) FCAVAsset *asset; // ivar: _asset
@property (readonly, nonatomic) FCContentArchive *contentArchive;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) CGFloat embeddedUpsellEndTime; // ivar: _embeddedUpsellEndTime
@property (readonly, nonatomic) CGFloat embeddedUpsellStartTime; // ivar: _embeddedUpsellStartTime
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithType:(NSInteger)arg0 asset:(id)arg1 duration:(CGFloat)arg2 ;
-(id)initWithType:(NSInteger)arg0 asset:(id)arg1 duration:(CGFloat)arg2 embeddedUpsellStartTime:(CGFloat)arg3 embeddedUpsellEndTime:(CGFloat)arg4 ;


@end


#endif