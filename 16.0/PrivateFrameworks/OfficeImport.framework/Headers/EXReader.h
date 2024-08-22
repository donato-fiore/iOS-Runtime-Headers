// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXREADER_H
#define EXREADER_H

@class NSString;


#import "OCXReader.h"

@interface EXReader : OCXReader

@property (retain, nonatomic) NSString *temporaryDirectory; // ivar: mTemporaryDirectory


-(id)defaultPassphrase;
-(id)read;


@end


#endif