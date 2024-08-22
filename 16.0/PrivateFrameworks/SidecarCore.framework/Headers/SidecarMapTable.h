// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIDECARMAPTABLE_H
#define SIDECARMAPTABLE_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface SidecarMapTable : NSObject {
    NSInteger _keyMask;
    NSMapTable *_keys2values;
    NSMapTable *_values2keys;
}




-(id)initWithKeyMask:(NSInteger)arg0 weakObjects:(BOOL)arg1 ;


@end


#endif