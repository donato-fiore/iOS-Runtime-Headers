// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EBSHEET_H
#define EBSHEET_H


#import <Foundation/Foundation.h>


@interface EBSheet : NSObject



+(Class)ebSheetClassFromEDSheet:(id)arg0 ;
+(Class)edSheetClassFromXlSheetTypeEnum:(int)arg0 ;
+(void)readDelayedSheetWithIndex:(unsigned int)arg0 state:(id)arg1 ;
+(void)readSheetWithIndex:(unsigned int)arg0 state:(id)arg1 ;


@end


#endif