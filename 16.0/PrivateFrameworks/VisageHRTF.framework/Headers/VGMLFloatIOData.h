// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VGMLFLOATIODATA_H
#define VGMLFLOATIODATA_H



#import "VGMLIOData.h"

@interface VGMLFloatIOData : VGMLIOData {
    NSUInteger _size;
    *float _data;
}




-(*float)getData;
-(NSUInteger)getSize;
-(id)initWithSize:(NSUInteger)arg0 withData:(*float)arg1 ;


@end


#endif