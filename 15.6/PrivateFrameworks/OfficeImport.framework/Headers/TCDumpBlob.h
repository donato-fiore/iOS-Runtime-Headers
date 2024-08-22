// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCDUMPBLOB_H
#define TCDUMPBLOB_H



#import "TCDumpType.h"

@interface TCDumpBlob : TCDumpType {
    NSUInteger mSize;
}




-(?)fromBinary:(?)arg0 toXmlstate;
-(id)initWithSize_:(NSUInteger)arg0 ;


@end


#endif