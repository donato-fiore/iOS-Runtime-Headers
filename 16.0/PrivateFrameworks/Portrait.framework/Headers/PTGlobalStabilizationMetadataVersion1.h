// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTGLOBALSTABILIZATIONMETADATAVERSION1_H
#define PTGLOBALSTABILIZATIONMETADATAVERSION1_H



#import "PTGlobalStabilizationMetadata.h"

@interface PTGlobalStabilizationMetadataVersion1 : PTGlobalStabilizationMetadata {
    ? _originalVideoDimensions;
}


@property (readonly) BOOL hasOriginalVideoDimensions; // ivar: _hasOriginalVideoDimensions
@property (nonatomic) ? originalVideoDimensions;


-(BOOL)writeToData:(id)arg0 withOptions:(id)arg1 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithMinorVersion:(unsigned int)arg0 ;
-(unsigned int)sizeOfSerializedObjectWithOptions:(id)arg0 ;


@end


#endif