// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSDOCUMENTDESERIALIZER_H
#define NSDOCUMENTDESERIALIZER_H



#import "NSAKDeserializer.h"

@interface NSDocumentDeserializer : NSAKDeserializer



-(id)deserializeNewData;
-(id)deserializeNewPList;
-(void)fixupDirInfo:(id)arg0 ;


@end


#endif