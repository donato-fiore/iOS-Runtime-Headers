// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUUIDTOSYMBOLICATE_H
#define SAUUIDTOSYMBOLICATE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SAUUIDToSymbolicate : NSObject {
    int _livePid;
    NSMutableArray *_binaries;
    NSUInteger _dataGatheringOptions;
}




-(id)debugDescription;


@end


#endif