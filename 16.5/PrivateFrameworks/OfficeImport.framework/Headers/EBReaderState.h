// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EBREADERSTATE_H
#define EBREADERSTATE_H



#import "EBState.h"
#import "ECColumnWidthConvertor.h"
#import "OABReaderState.h"

@interface EBReaderState : EBState {
    *void mXlReader;
    *void mXlSheetInfoTable;
    ECColumnWidthConvertor *mColumnWidthConvertor;
    *XlEshObjectFactory mXlEshObjectFactory;
    OABReaderState *mOAState;
}


@property (nonatomic) BOOL importCSV; // ivar: mImportCSV


-(*void)xlReader;
-(*void)xlSheetInfoTable;
-(id)columnWidthConvertor;
-(id)initWithXlReader:(*void)arg0 cancelDelegate:(id)arg1 ;
-(id)oaState;
-(void)dealloc;
-(void)pauseReading;
-(void)readGlobalXlObjects;
-(void)reportWarning:(id)arg0 ;
-(void)resumeReading;


@end


#endif