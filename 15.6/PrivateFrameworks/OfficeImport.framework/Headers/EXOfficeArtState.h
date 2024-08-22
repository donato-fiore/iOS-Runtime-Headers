// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXOFFICEARTSTATE_H
#define EXOFFICEARTSTATE_H



#import "OAXDrawingState.h"
#import "EXReadState.h"

@interface EXOfficeArtState : OAXDrawingState

@property (readonly, weak) EXReadState *excelState; // ivar: mExcelState


-(id)initWithExcelState:(id)arg0 ;


@end


#endif