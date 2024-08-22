// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCZIPENTRYTEXTWRITERPROVIDER_H
#define TCZIPENTRYTEXTWRITERPROVIDER_H

@class NSString;


#import "TCXmlTextWriterProvider.h"
#import "OISFUZipArchiveOutputStream.h"

@interface TCZipEntryTextWriterProvider : TCXmlTextWriterProvider

@property (readonly, copy, nonatomic) NSString *entryName; // ivar: _entryName
@property (readonly, nonatomic) BOOL isCompressed; // ivar: _isCompressed
@property (readonly, nonatomic) OISFUZipArchiveOutputStream *outputStream; // ivar: _outputStream


-(BOOL)setUp;
-(id)initWithEntryName:(id)arg0 outputStream:(id)arg1 isCompressed:(BOOL)arg2 ;


@end


#endif