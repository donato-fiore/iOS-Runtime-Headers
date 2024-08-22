// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMCHARTSHEETMAPPER_H
#define EMCHARTSHEETMAPPER_H



#import "EMSheetMapper.h"
#import "EDChartSheet.h"

@interface EMChartsheetMapper : EMSheetMapper {
    EDChartSheet *mChartSheet;
    CGRect mBox;
}




-(id)initWithChartSheet:(id)arg0 parent:(id)arg1 ;
-(int)preprocessHeightWithState:(id)arg0 ;
-(int)preprocessWidthWithState:(id)arg0 ;
-(int)width;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;


@end


#endif