// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFCACOLORMATRIXSETTINGS_H
#define SBFCACOLORMATRIXSETTINGS_H

@class PTSettings;



@interface SBFCAColorMatrixSettings : PTSettings

@property (nonatomic) CAColorMatrix colorMatrix;
@property (nonatomic) BOOL controlFirstThreeRowsTogether; // ivar: _controlFirstThreeRowsTogether
@property (nonatomic) CGFloat m11; // ivar: _m11
@property (nonatomic) CGFloat m12; // ivar: _m12
@property (nonatomic) CGFloat m13; // ivar: _m13
@property (nonatomic) CGFloat m14; // ivar: _m14
@property (nonatomic) CGFloat m15; // ivar: _m15
@property (nonatomic) CGFloat m21; // ivar: _m21
@property (nonatomic) CGFloat m22; // ivar: _m22
@property (nonatomic) CGFloat m23; // ivar: _m23
@property (nonatomic) CGFloat m24; // ivar: _m24
@property (nonatomic) CGFloat m25; // ivar: _m25
@property (nonatomic) CGFloat m31; // ivar: _m31
@property (nonatomic) CGFloat m32; // ivar: _m32
@property (nonatomic) CGFloat m33; // ivar: _m33
@property (nonatomic) CGFloat m34; // ivar: _m34
@property (nonatomic) CGFloat m35; // ivar: _m35
@property (nonatomic) CGFloat m41; // ivar: _m41
@property (nonatomic) CGFloat m42; // ivar: _m42
@property (nonatomic) CGFloat m43; // ivar: _m43
@property (nonatomic) CGFloat m44; // ivar: _m44
@property (nonatomic) CGFloat m45; // ivar: _m45
@property (nonatomic) CGFloat mx1;
@property (nonatomic) CGFloat mx2;
@property (nonatomic) CGFloat mx3;
@property (nonatomic) CGFloat mx4;
@property (nonatomic) CGFloat mx5;


+(BOOL)ignoresKey:(id)arg0 ;
+(id)settingsControllerModule;
-(id)drillDownSummary;
-(void)setDefaultValues;


@end


#endif