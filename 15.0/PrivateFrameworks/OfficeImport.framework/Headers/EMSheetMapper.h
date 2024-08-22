// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMSHEETMAPPER_H
#define EMSHEETMAPPER_H



#import "CMMapper.h"

@interface EMSheetMapper : CMMapper



-(int)height;
-(int)preprocessHeightWithState:(id)arg0 ;
-(int)preprocessWidthWithState:(id)arg0 ;
-(int)width;
-(struct CGSize )adjustedSize;
-(struct CGSize )preprocessSizeWithState:(id)arg0 ;


@end


#endif