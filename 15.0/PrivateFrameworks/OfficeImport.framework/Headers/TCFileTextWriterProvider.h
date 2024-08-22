// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCFILETEXTWRITERPROVIDER_H
#define TCFILETEXTWRITERPROVIDER_H

@class NSString;


#import "TCXmlTextWriterProvider.h"

@interface TCFileTextWriterProvider : TCXmlTextWriterProvider

@property (readonly, copy, nonatomic) NSString *filePath; // ivar: _filePath


-(BOOL)setUp;
-(id)initWithFilePath:(id)arg0 ;


@end


#endif