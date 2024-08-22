// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EBWORKBOOK_H
#define EBWORKBOOK_H


#import <Foundation/Foundation.h>


@interface EBWorkbook : NSObject



+(*void)createSheetNamesFromWorkbook:(id)arg0 ;
+(id)readWithState:(id)arg0 reader:(id)arg1 ;
+(int)xlSheetTypeEnumFromEDSheet:(id)arg0 ;
+(void)readDocumentPresentation:(id)arg0 state:(id)arg1 ;
+(void)readDocumentProperties:(id)arg0 state:(id)arg1 ;
+(void)setupProcessors:(id)arg0 ;


@end


#endif