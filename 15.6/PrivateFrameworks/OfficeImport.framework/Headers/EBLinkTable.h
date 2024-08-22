// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EBLINKTABLE_H
#define EBLINKTABLE_H


#import <Foundation/Foundation.h>


@interface EBLinkTable : NSObject



+(*void)createXlLinkTableFromLinksCollection:(id)arg0 workbook:(id)arg1 state:(id)arg2 ;
+(int)mapEDLinkTypeToXl:(int)arg0 ;
+(int)mapXlLinkTypeToED:(int)arg0 ;
+(void)readFromState:(id)arg0 ;


@end


#endif