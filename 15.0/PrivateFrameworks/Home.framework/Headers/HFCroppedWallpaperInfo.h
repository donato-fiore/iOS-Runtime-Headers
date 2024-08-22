// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCROPPEDWALLPAPERINFO_H
#define HFCROPPEDWALLPAPERINFO_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HFCroppedWallpaperInfo : NSObject <NSCopying>



@property (readonly, nonatomic) CGPoint center; // ivar: _center
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) NSInteger source; // ivar: _source


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSource:(NSInteger)arg0 center:(struct CGPoint )arg1 scale:(CGFloat)arg2 ;


@end


#endif