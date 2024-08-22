// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXSHEET_H
#define EXSHEET_H


#import <Foundation/Foundation.h>


@interface EXSheet : NSObject



+(?)readFromstate;
+(?)readSheetPropertiesstate;
+(Class)exSheetClassFromXmlSheetType:(id)arg0 location:(id)arg1 ;
+(void)readAllDrawablesWithState:(id)arg0 ;
+(void)readCommonSheetElementsFrom:(struct _xmlTextReader *)arg0 state:(id)arg1 ;
+(void)readDelayedSheeWithLocation:(id)arg0 sheetXmlType:(id)arg1 state:(id)arg2 ;
+(void)readDrawablesWithState:(id)arg0 ;
+(void)readLegacyDrawablesWithState:(id)arg0 ;


@end


#endif