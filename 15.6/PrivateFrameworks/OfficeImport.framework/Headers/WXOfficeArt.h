// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WXOFFICEART_H
#define WXOFFICEART_H


#import <Foundation/Foundation.h>


@interface WXOfficeArt : NSObject



+(?)readClientData:(?)arg0 stateto;
+(?)readFrom:(?)arg0 parentRElement:(?)arg1 parentParagraph:(?)arg2 stateto;
+(?)readOAX:(?)arg0 parentRElement:(?)arg1 parentParagraph:(?)arg2 stateto;
+(?)readPosition:(?)arg0 state:(?)arg1 toisHorizontal;
+(?)readVml:(?)arg0 parentRElement:(?)arg1 parentParagraph:(?)arg2 stateto;
+(?)readWrap:(?)arg0 stateto;
+(?)readWrapDistance:(?)arg0 parentElement:(?)arg1 stateto;
+(BOOL)writeWrapTightlyWith:(id)arg0 toWriter:(id)arg1 ;
+(id)relativeHorizontalPositionEnumMap;
+(id)relativeVerticalPositionEnumMap;
+(id)textWrappingModeTypeEnumMap;
+(void)writeWrapBottomDistance:(id)arg0 to:(id)arg1 ;
+(void)writeWrapLeftDistance:(id)arg0 to:(id)arg1 ;
+(void)writeWrapPolygonChildren:(id)arg0 to:(id)arg1 ;
+(void)writeWrapRightDistance:(id)arg0 to:(id)arg1 ;
+(void)writeWrapText:(id)arg0 to:(id)arg1 ;
+(void)writeWrapTopDistance:(id)arg0 to:(id)arg1 ;


@end


#endif