// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OABSHAPEMANAGER_H
#define OABSHAPEMANAGER_H

@class NSString;
@protocol OABPropertiesManager;


#import "OABShapeBaseManager.h"

@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager>

 {
    *void mShape;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hidden;
-(BOOL)isFillOK;
-(BOOL)isFilled;
-(BOOL)isShadowOK;
-(BOOL)isShadowed;
-(BOOL)isStrokeOK;
-(BOOL)isStroked;
-(BOOL)isTextPath;
-(BOOL)textPathBold;
-(BOOL)textPathItalic;
-(BOOL)textPathSmallcaps;
-(BOOL)textPathStrikethrough;
-(BOOL)textPathUnderline;
-(id)initWithShape:(*void)arg0 ;
-(id)initWithShape:(*void)arg0 masterShape:(*void)arg1 ;
-(id)textPathFontFamily;
-(id)textPathUnicodeString;
-(int)textPathFontSize;
-(int)textPathTextAlignment;


@end


#endif