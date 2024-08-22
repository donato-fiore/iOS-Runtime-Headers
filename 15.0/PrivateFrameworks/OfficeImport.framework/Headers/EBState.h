// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EBSTATE_H
#define EBSTATE_H

@protocol TCCancelDelegate;

#import <Foundation/Foundation.h>

#import "EDWorkbook.h"
#import "EDResources.h"

@interface EBState : NSObject {
    *void mXlLinkTable;
    *void mXlNameTable;
    *void mSheetNames;
    *void mXlFormulaProcessor;
    EDWorkbook *mWorkbook;
    EDResources *mResources;
}


@property (readonly, nonatomic) NSObject<TCCancelDelegate> *cancelDelegate; // ivar: mCancelDelegate


-(*void)sheetNames;
-(*void)xlFormulaProcessor;
-(*void)xlLinkTable;
-(*void)xlNameTable;
-(BOOL)isCancelled;
-(id)initWithCancelDelegate:(id)arg0 ;
-(id)resources;
-(id)workbook;
-(void)dealloc;
-(void)setResources:(id)arg0 ;
-(void)setWorkbook:(id)arg0 ;


@end


#endif