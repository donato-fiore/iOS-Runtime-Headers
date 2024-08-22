// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDFORMULAHELPER_H
#define EDFORMULAHELPER_H

@class NSString;
@protocol EFHelper;

#import <Foundation/Foundation.h>

#import "EDWorkbook.h"
#import "EDWorksheet.h"
#import "ECMappingContext.h"

@interface EDFormulaHelper : NSObject <EFHelper>

 {
    EDWorkbook *mWorkbook;
    EDWorksheet *mWorksheet;
    int mRowNumber;
    int mColumnNumber;
    ECMappingContext *mMappingContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isCurrentSheet:(id)arg0 ;
-(NSUInteger)createIndexWithType:(int)arg0 firstSheetIndex:(NSUInteger)arg1 lastSheetIndex:(NSUInteger)arg2 ;
-(NSUInteger)resolveFile:(id)arg0 ;
-(NSUInteger)resolveFirstSheet:(id)arg0 lastSheet:(id)arg1 ;
-(NSUInteger)resolveName:(id)arg0 ;
-(NSUInteger)resolveSheet:(id)arg0 ;
-(NSUInteger)resolveTableColumn:(id)arg0 columnName:(id)arg1 ;
-(NSUInteger)resolveTableToSheetId:(id)arg0 ;
-(id)initWithWorkbook:(id)arg0 worksheet:(id)arg1 rowNumber:(int)arg2 columnNumber:(int)arg3 ;
-(id)resolveTable:(id)arg0 ;
-(id)workbook;
-(int)columnNumber;
-(int)resolveFunctionName:(id)arg0 ;
-(int)rowNumber;


@end


#endif