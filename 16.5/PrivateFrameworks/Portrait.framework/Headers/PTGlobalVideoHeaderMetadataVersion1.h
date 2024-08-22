// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTGLOBALVIDEOHEADERMETADATAVERSION1_H
#define PTGLOBALVIDEOHEADERMETADATAVERSION1_H



#import "PTGlobalVideoHeaderMetadata.h"

@interface PTGlobalVideoHeaderMetadataVersion1 : PTGlobalVideoHeaderMetadata



-(BOOL)writeToData:(id)arg0 withOptions:(id)arg1 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithMinorVersion:(unsigned int)arg0 ;
-(unsigned int)sizeOfSerializedObjectWithOptions:(id)arg0 ;


@end


#endif