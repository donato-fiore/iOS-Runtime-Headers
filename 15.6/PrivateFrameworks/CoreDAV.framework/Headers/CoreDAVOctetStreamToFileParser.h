// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVOCTETSTREAMTOFILEPARSER_H
#define COREDAVOCTETSTREAMTOFILEPARSER_H

@class NSFileHandle;


#import "CoreDAVOctetStreamParser.h"

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser

@property (retain, nonatomic) NSFileHandle *fileHandle; // ivar: _fileHandle


-(BOOL)processData:(id)arg0 forTask:(id)arg1 ;
-(id)initWithFileHandle:(id)arg0 ;


@end


#endif