// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EBOFFICEARTREADERCLIENT_H
#define EBOFFICEARTREADERCLIENT_H

@protocol OABReaderClient;

#import <Foundation/Foundation.h>


@interface EBOfficeArtReaderClient : NSObject <OABReaderClient>





+(BOOL)escherIsFullySupported;
+(BOOL)tablesAreAllowed;
+(BOOL)xmlEquivalentOfDrawableCanBeUsed;
+(id)readDrawableFromPackagePart:(id)arg0 foundInObject:(id)arg1 state:(id)arg2 ;
+(int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg0 state:(id)arg1 ;
+(void)readClientDataFromGroup:(id)arg0 toGroup:(id)arg1 state:(id)arg2 ;
+(void)readClientDataFromShape:(id)arg0 toGraphic:(id)arg1 state:(id)arg2 ;
+(void)readClientDataFromTableCell:(id)arg0 toTableCell:(id)arg1 state:(id)arg2 ;
+(void)readEshClientAnchor:(*void)arg0 targetClientData:(id)arg1 state:(id)arg2 ;
+(void)setAutoInsetForShape:(*void)arg0 ;


@end


#endif