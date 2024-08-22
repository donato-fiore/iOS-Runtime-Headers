// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAUIPEARLGLYPHSTATICCONFIGURATION_H
#define LAUIPEARLGLYPHSTATICCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface LAUIPearlGlyphStaticConfiguration : NSObject

@property (nonatomic) CGFloat checkmarkThicknessScale; // ivar: _checkmarkThicknessScale
@property (nonatomic) NSInteger initialStyle; // ivar: _initialStyle
@property (nonatomic) CGFloat lineThicknessScale; // ivar: _lineThicknessScale
@property (nonatomic) NSInteger pathStyle; // ivar: _pathStyle


+(id)createDefaultConfiguration;
+(id)createSystemApertureConfiguration;
-(id)init;


@end


#endif