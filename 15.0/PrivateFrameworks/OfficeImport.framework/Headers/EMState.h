// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMSTATE_H
#define EMSTATE_H

@class NSMutableDictionary;


#import "CMState.h"
#import "EDWorkbook.h"
#import "EDSheet.h"

@interface EMState : CMState {
    EDWorkbook *_workbook;
    NSMutableDictionary *_hyperlinks;
}


@property (weak) EDSheet *currentSheet; // ivar: _currentSheet
@property (retain) EDWorkbook *document;


-(id)hyperlinkForRow:(NSUInteger)arg0 column:(NSUInteger)arg1 ;
-(void)setHyperlink:(id)arg0 forRow:(NSUInteger)arg1 column:(NSUInteger)arg2 ;


@end


#endif