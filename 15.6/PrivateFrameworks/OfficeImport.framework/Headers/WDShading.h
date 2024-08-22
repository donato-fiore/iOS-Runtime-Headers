// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDSHADING_H
#define WDSHADING_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "OITSUColor.h"

@interface WDShading : NSObject <NSCopying>

 {
    int mStyle;
    OITSUColor *mForegroundColor;
    OITSUColor *mBackgroundColor;
}




+(id)autoBackgroundColor;
+(id)autoForegroundColor;
+(id)nilShading;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToShading:(id)arg0 ;
-(NSUInteger)hash;
-(id)background;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)foreground;
-(id)init;
-(int)style;
-(void)setBackground:(id)arg0 ;
-(void)setForeground:(id)arg0 ;
-(void)setShading:(id)arg0 ;
-(void)setStyle:(int)arg0 ;


@end


#endif