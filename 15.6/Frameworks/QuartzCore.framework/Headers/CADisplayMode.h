// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADISPLAYMODE_H
#define CADISPLAYMODE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CADisplayMode : NSObject {
    *CADisplayModePriv _priv;
}


@property (readonly, nonatomic) NSUInteger bitDepth;
@property (readonly, copy, nonatomic) NSString *colorGamut;
@property (readonly, copy, nonatomic) NSString *colorMode;
@property (readonly, nonatomic) BOOL colorModeIsYCbCr;
@property (readonly, copy, nonatomic) NSString *hdrMode;
@property (readonly, nonatomic) NSUInteger height;
@property (readonly, nonatomic, getter=isHighBandwidth) BOOL highBandwidth;
@property (readonly, nonatomic) NSUInteger internalRepresentation;
@property (readonly, nonatomic) BOOL isVRR;
@property (readonly, nonatomic) BOOL isVirtual;
@property (readonly, nonatomic) CGFloat pixelAspectRatio;
@property (readonly, nonatomic) NSUInteger preferredScale;
@property (readonly, nonatomic) CGFloat refreshRate;
@property (readonly, nonatomic) NSUInteger width;


+(id)_displayModeWithMode:(struct Mode )arg0 display:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_display;
-(id)_initWithMode:(struct Mode )arg0 display:(id)arg1 ;
-(id)description;
-(struct Mode )_mode;
-(void)_setPreferredUIScale:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif