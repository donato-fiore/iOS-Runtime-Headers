// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABVCARDEXPORTER_H
#define ABVCARDEXPORTER_H


#import <Foundation/Foundation.h>


@interface ABVCardExporter : NSObject



+(id)_vCard21RepresentationOfRecords:(id)arg0 ;
+(id)_vCard30RepresentationOfRecords:(id)arg0 ;
+(id)vCardRepresentationOfRecord:(*void)arg0 mode:(int)arg1 ;
+(id)vCardRepresentationOfRecords:(id)arg0 mode:(int)arg1 ;


@end


#endif