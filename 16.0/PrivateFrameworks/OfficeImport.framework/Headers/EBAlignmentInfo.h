// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EBALIGNMENTINFO_H
#define EBALIGNMENTINFO_H


#import <Foundation/Foundation.h>


@interface EBAlignmentInfo : NSObject



+(id)edAlignmentInfoFromXlDXfAlign:(struct XlDXfAlign *)arg0 ;
+(id)edAlignmentInfoFromXlGraphicsInfo:(*void)arg0 ;
+(id)edAlignmentInfoFromXlXf:(struct XlXf *)arg0 ;
+(int)convertEDHorizontalAlignmentEnumToXl:(int)arg0 ;
+(int)convertEDVerticalAlignmentEnumToXl:(int)arg0 ;
+(int)convertXlHorizAlignEnumToED:(int)arg0 ;
+(int)convertXlVertAlignEnumToED:(int)arg0 ;
+(struct XlDXfAlign *)xlDXfAlignFromEDAlignmentInfo:(id)arg0 ;
+(void)writeAlignmentInfo:(id)arg0 toXlGraphicsInfo:(*void)arg1 ;
+(void)writeAlignmentInfo:(id)arg0 toXlXf:(struct XlXf *)arg1 ;


@end


#endif