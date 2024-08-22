// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDEXTENDEDTYPEREADER_H
#define HMDEXTENDEDTYPEREADER_H



#import "HMDTokenBasedStructuredReader.h"
#import "HMDStructuredReader.h"

@interface HMDExtendedTypeReader : HMDTokenBasedStructuredReader {
    HMDStructuredReader *_reader;
    _HMDStructuredDataToken _buffer;
    NSUInteger _bufferHead;
    NSUInteger _bufferCount;
}




-(id)initWithReader:(id)arg0 ;
-(struct _HMDStructuredDataToken )nextTokenAfterToken:(struct _HMDStructuredDataToken *)arg0 ;


@end


#endif