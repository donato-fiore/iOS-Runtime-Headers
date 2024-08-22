// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCODER_H
#define SFCODER_H


#import <Foundation/Foundation.h>

#import "SFCodingOptions.h"

@interface SFCoder : NSObject {
    id *_coderInternal;
}


@property (copy, nonatomic) SFCodingOptions *options;


-(id)encodeTopLevelValue:(id)arg0 error:(*id)arg1 ;
-(id)initWithOptions:(id)arg0 ;


@end


#endif