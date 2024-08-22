// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXWORKSHEET_H
#define EXWORKSHEET_H


#import <Foundation/Foundation.h>


@interface EXWorksheet : NSObject



+(?)readColumnInfosFromstate;
+(?)readHyperlinksFromstate;
+(?)readOleObjectsFromstate;
+(?)readSheetExtensionsstate;
+(?)readSheetExtensionstate;
+(?)readWorksheetFormatPropertiesFromstate;
+(?)readWorksheetViewsFromstate;
+(BOOL)readDistinctSheetElementsFrom:(struct _xmlTextReader *)arg0 state:(id)arg1 ;
+(id)edSheetWithState:(id)arg0 ;
+(void)readCommentTextFrom:(id)arg0 ;
+(void)readOtherSheetComponentsWithState:(id)arg0 ;
+(void)readPivotTables:(id)arg0 ;
+(void)readTables:(id)arg0 ;
+(void)setupProcessors:(id)arg0 ;


@end


#endif