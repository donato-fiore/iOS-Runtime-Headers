// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADSHAPESTYLE_H
#define OADSHAPESTYLE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "OADStyleMatrixReference.h"
#import "OADFontReference.h"

@interface OADShapeStyle : NSObject <NSCopying>

 {
    OADStyleMatrixReference *mLineReference;
    OADStyleMatrixReference *mFillReference;
    OADStyleMatrixReference *mEffectReference;
    OADFontReference *mFontReference;
}




+(id)defaultOfficeShapeStyle;
+(id)defaultShapeStyle;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)effectReference;
-(id)fillReference;
-(id)fontReference;
-(id)lineReference;
-(void)applyToGraphicProperties:(id)arg0 styleMatrix:(id)arg1 ;
-(void)applyToGraphicProperties:(id)arg0 styleMatrix:(id)arg1 useNull:(BOOL)arg2 strokeWidthMultiplier:(float)arg3 ;
-(void)applyToParagraphProperties:(id)arg0 ;
-(void)applyToTextBody:(id)arg0 ;
-(void)applyToTextListStyle:(id)arg0 ;
-(void)setEffectMatrixIndex:(unsigned int)arg0 color:(id)arg1 ;
-(void)setEffectReference:(id)arg0 ;
-(void)setFillMatrixIndex:(unsigned int)arg0 color:(id)arg1 ;
-(void)setFillReference:(id)arg0 ;
-(void)setFontReference:(id)arg0 ;
-(void)setLineMatrixIndex:(unsigned int)arg0 color:(id)arg1 ;
-(void)setLineReference:(id)arg0 ;


@end


#endif