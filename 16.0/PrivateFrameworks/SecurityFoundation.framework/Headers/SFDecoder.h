// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFDECODER_H
#define SFDECODER_H


#import <Foundation/Foundation.h>

#import "SFCodingOptions.h"

@interface SFDecoder : NSObject {
    id *_decoderInternal;
}


@property (copy, nonatomic) SFCodingOptions *options;


-(id)decodeValueOfType:(Class)arg0 fromData:(id)arg1 error:(id)arg2 ;
-(id)initWithOptions:(id)arg0 ;


@end


#endif