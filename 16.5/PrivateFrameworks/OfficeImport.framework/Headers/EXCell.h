// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXCELL_H
#define EXCELL_H


#import <Foundation/Foundation.h>


@interface EXCell : NSObject



+(?)edCellFromXmlCellElement:(?)arg0 edRowInfo:(?)arg1 edRowBlock:(?)arg2 edRowBlocksstate;
+(?)edCellTypeFromXmlCellElement:(?)arg0 isDate:(?)arg1 isFmlaStrstringIndex;
+(BOOL)edBoolFromXmlBoolString:(id)arg0 ;
+(CGFloat)dateTimeNumberFromXmlDateString:(id)arg0 state:(id)arg1 ;
+(id)xmlErrorStringValueEnumMap;
+(int)edErrorFromXmlErrorString:(id)arg0 ;


@end


#endif