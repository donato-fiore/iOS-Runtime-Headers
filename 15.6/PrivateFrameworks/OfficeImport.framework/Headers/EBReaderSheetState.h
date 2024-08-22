// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EBREADERSHEETSTATE_H
#define EBREADERSHEETSTATE_H


#import <Foundation/Foundation.h>

#import "EBReaderState.h"
#import "EDSheet.h"

@interface EBReaderSheetState : NSObject {
    EBReaderState *mReaderState;
    EDSheet *mEDSheet;
    map<int, unsigned long, std::less<int>, std::allocator<std::pair<const int, unsigned long>>> mSharedFormulas;
    NSUInteger mChartIndex;
}




-(*void)xlReader;
-(NSUInteger)nextChartIndex;
-(NSUInteger)sharedFormulaIndexForRowCol:(int)arg0 ;
-(id)edSheet;
-(id)initWithReaderState:(id)arg0 ;
-(id)readerState;
-(id)resources;
-(id)workbook;
-(void)reportWorksheetWarning:(id)arg0 ;
-(void)setEDSheet:(id)arg0 ;
-(void)setSharedFormulaIndex:(NSUInteger)arg0 forRowCol:(int)arg1 ;


@end


#endif