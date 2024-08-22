// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPNUMBERPARSER_H
#define HAPNUMBERPARSER_H



#import "HAPTLVDescription.h"

@interface HAPNumberParser : HAPTLVDescription

@property (readonly, nonatomic) NSUInteger decodedNumber; // ivar: _decodedNumber


-(id)initWithTLVData:(id)arg0 ;


@end


#endif