// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBOFFICEARTREADERCLIENT_H
#define PBOFFICEARTREADERCLIENT_H

@protocol OABReaderClient;

#import <Foundation/Foundation.h>


@interface PBOfficeArtReaderClient : NSObject <OABReaderClient>





+(BOOL)escherIsFullySupported;
+(BOOL)readClientTextBoxFromShape:(id)arg0 toGraphic:(id)arg1 clientData:(id)arg2 state:(id)arg3 ;
+(BOOL)readOleFromClientDataHolder:(id)arg0 toGraphic:(id)arg1 tgtClientData:(id)arg2 state:(id)arg3 ;
+(BOOL)readPlaceholderInfo:(id)arg0 clientData:(id)arg1 toGraphic:(id)arg2 presentationState:(id)arg3 ;
+(BOOL)readRecolorInfoFromClientDataHolder:(id)arg0 toClientData:(id)arg1 state:(id)arg2 ;
+(BOOL)tablesAreAllowed;
+(BOOL)xmlEquivalentOfDrawableCanBeUsed;
+(id)newBuildFromBuildType:(int)arg0 ;
+(id)newTargetFromDrawable:(id)arg0 clientData:(id)arg1 buildType:(int)arg2 ;
+(id)readClientTextBoxFromShape:(id)arg0 toTextBody:(id)arg1 state:(id)arg2 ;
+(id)readDrawableFromPackagePart:(id)arg0 foundInObject:(id)arg1 state:(id)arg2 ;
+(int)directionFromFlyDirection:(int)arg0 ;
+(int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg0 state:(id)arg1 ;
+(int)presetIdFromFlyMethod:(int)arg0 isEntrance:(BOOL)arg1 ;
+(void)addRecolorSpec:(struct PptRecolorSpec *)arg0 toDictionary:(id)arg1 state:(id)arg2 ;
+(void)readClientAnchorFromContainer:(id)arg0 toDrawable:(id)arg1 state:(id)arg2 ;
+(void)readClientDataFromGroup:(id)arg0 toGroup:(id)arg1 state:(id)arg2 ;
+(void)readClientDataFromShape:(id)arg0 toGraphic:(id)arg1 state:(id)arg2 ;
+(void)readClientDataFromTableCell:(id)arg0 toTableCell:(id)arg1 state:(id)arg2 ;
+(void)readHyperlinkFromShapeContainerHolder:(id)arg0 toDrawable:(id)arg1 state:(id)arg2 ;


@end


#endif