// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CUIPSDSUBLAYERINFO_H
#define _CUIPSDSUBLAYERINFO_H


#import <Foundation/Foundation.h>


@interface _CUIPSDSublayerInfo : NSObject {
    unsigned int _numOfSublayers;
}




+(id)newWithSublayerCount:(unsigned int)arg0 indexSet:(id)arg1 ;
-(unsigned int)numberOfSublayers;
-(unsigned int)sublayerAtIndex:(unsigned int)arg0 isValid:(*BOOL)arg1 ;


@end


#endif