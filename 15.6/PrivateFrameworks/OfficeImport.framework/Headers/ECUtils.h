// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECUTILS_H
#define ECUTILS_H


#import <Foundation/Foundation.h>


@interface ECUtils : NSObject



+(BOOL)isRenameFunction:(id)arg0 ;
+(BOOL)isValidDateTime:(CGFloat)arg0 edWorkbook:(id)arg1 ;
+(BOOL)validDateInExcel:(id)arg0 edWorkbook:(id)arg1 ;
+(CGFloat)dateTimeNumberFromNSDate:(id)arg0 edWorkbook:(id)arg1 ;
+(CGFloat)timeIntervalFromXlDateTimeNumber:(CGFloat)arg0 edWorkbook:(id)arg1 ;
+(id)dateFromXlDateTimeNumber:(CGFloat)arg0 edWorkbook:(id)arg1 ;
+(id)lassoDefaultTableName;
+(id)lassoStyleTableReferenceFromTableId:(id)arg0 ;
+(id)renameFunction:(id)arg0 ;
+(id)renameMap;
+(unsigned int)dateTimeOffsetForBuggy1900Dates:(CGFloat)arg0 edWorkbook:(id)arg1 ;


@end


#endif