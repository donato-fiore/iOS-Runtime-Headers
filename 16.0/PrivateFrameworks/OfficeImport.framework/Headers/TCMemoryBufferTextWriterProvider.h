// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCMEMORYBUFFERTEXTWRITERPROVIDER_H
#define TCMEMORYBUFFERTEXTWRITERPROVIDER_H

@class NSMutableData;


#import "TCXmlTextWriterProvider.h"

@interface TCMemoryBufferTextWriterProvider : TCXmlTextWriterProvider

@property (readonly, retain, nonatomic) NSMutableData *memoryBuffer; // ivar: _memoryBuffer


-(BOOL)setUp;
-(id)initWithMemoryBuffer:(id)arg0 ;


@end


#endif