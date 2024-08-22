// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBOFFICEARTREADERCLIENT_H
#define WBOFFICEARTREADERCLIENT_H

@protocol OABReaderClient;

#import <Foundation/Foundation.h>


@interface WBOfficeArtReaderClient : NSObject <OABReaderClient>





+(BOOL)allowOverlap:(struct EshContentProperties *)arg0 ;
+(BOOL)behindText:(struct EshContentProperties *)arg0 ;
+(BOOL)escherIsFullySupported;
+(BOOL)tablesAreAllowed;
+(BOOL)xmlEquivalentOfDrawableCanBeUsed;
+(CGFloat)wrapDistanceBottom:(struct EshContentProperties *)arg0 ;
+(CGFloat)wrapDistanceLeft:(struct EshContentProperties *)arg0 ;
+(CGFloat)wrapDistanceRight:(struct EshContentProperties *)arg0 ;
+(CGFloat)wrapDistanceTop:(struct EshContentProperties *)arg0 ;
+(id)readDrawableFromPackagePart:(id)arg0 foundInObject:(id)arg1 state:(id)arg2 ;
+(int)horizontalPosition:(struct EshContentProperties *)arg0 ;
+(int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg0 state:(id)arg1 ;
+(int)relativeHorizontalPosition:(struct EshContentProperties *)arg0 ;
+(int)relativeVerticalPosition:(struct EshContentProperties *)arg0 ;
+(int)verticalPosition:(struct EshContentProperties *)arg0 ;
+(void)readClientDataFromGroup:(id)arg0 toGroup:(id)arg1 state:(id)arg2 ;
+(void)readClientDataFromObject:(id)arg0 toDrawable:(id)arg1 state:(id)arg2 ;
+(void)readClientDataFromShape:(id)arg0 toGraphic:(id)arg1 includeText:(BOOL)arg2 state:(id)arg3 ;
+(void)readClientDataFromShape:(id)arg0 toGraphic:(id)arg1 state:(id)arg2 ;
+(void)readClientDataFromTableCell:(id)arg0 toTableCell:(id)arg1 state:(id)arg2 ;
+(void)readFrom:(struct EshContentProperties *)arg0 to:(id)arg1 ;


@end


#endif