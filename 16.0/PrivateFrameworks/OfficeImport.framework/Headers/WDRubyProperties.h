// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDRUBYPROPERTIES_H
#define WDRUBYPROPERTIES_H


#import <Foundation/Foundation.h>


@interface WDRubyProperties : NSObject {
    BOOL mOriginal;
    *? mOriginalProperties;
}


@property (nonatomic) int alignment;
@property (nonatomic) unsigned short baseFontSize;
@property (nonatomic) unsigned short distanceBetween;
@property (nonatomic) unsigned short phoneticGuideFontSize;
@property (nonatomic) int phoneticGuideLanguage;


-(BOOL)isAlignmentOverridden;
-(BOOL)isAnythingOverridden;
-(BOOL)isAnythingOverriddenIn:(struct ? *)arg0 ;
-(BOOL)isBaseFontSizeOverridden;
-(BOOL)isDistanceBetweenOverridden;
-(BOOL)isPhoneticGuideFontSizeOverridden;
-(BOOL)isPhoneticGuideLanguageOverridden;
-(id)description;
-(id)init;
-(void)clearAlignment;
-(void)clearBaseFontSize;
-(void)clearDistanceBetween;
-(void)clearPhoneticGuideFontSize;
-(void)clearPhoneticGuideLanguage;
-(void)dealloc;


@end


#endif