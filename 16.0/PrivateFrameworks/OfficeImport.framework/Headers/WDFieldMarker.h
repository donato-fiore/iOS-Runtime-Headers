// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDFIELDMARKER_H
#define WDFIELDMARKER_H

@class NSData;


#import "WDRunWithCharacterProperties.h"

@interface WDFieldMarker : WDRunWithCharacterProperties {
    int mFieldPosition;
    int mMarkerType;
    unsigned char mFieldType;
    NSData *mData;
    BOOL mZombieEmbed;
    BOOL mResultDirty;
    BOOL mResultEdited;
    BOOL mLocked;
    BOOL mPrivateResult;
    BOOL mNested;
    BOOL mHasSeparator;
}




-(BOOL)hasSeparator;
-(BOOL)locked;
-(BOOL)nested;
-(BOOL)privateResult;
-(BOOL)resultDirty;
-(BOOL)resultEdited;
-(BOOL)zombieEmbed;
-(id)data;
-(id)description;
-(id)initWithParagraph:(id)arg0 ;
-(int)fieldMarkerType;
-(int)fieldPosition;
-(int)runType;
-(unsigned char)fieldType;
-(void)setData:(id)arg0 ;
-(void)setFieldMarkerType:(int)arg0 ;
-(void)setFieldPosition:(int)arg0 ;
-(void)setFieldType:(unsigned char)arg0 ;
-(void)setHasSeparator:(BOOL)arg0 ;
-(void)setLocked:(BOOL)arg0 ;
-(void)setNested:(BOOL)arg0 ;
-(void)setPrivateResult:(BOOL)arg0 ;
-(void)setResultDirty:(BOOL)arg0 ;
-(void)setResultEdited:(BOOL)arg0 ;
-(void)setZombieEmbed:(BOOL)arg0 ;


@end


#endif