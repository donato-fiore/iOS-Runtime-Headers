// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDCOASTGUARD_H
#define ASDCOASTGUARD_H

@class NSData;

#import <Foundation/Foundation.h>


@interface ASDCoastGuard : NSObject {
    NSData *_deadlistItemIDs;
}




-(BOOL)isUnrepairableAppWithItemID:(NSUInteger)arg0 externalVersionID:(NSUInteger)arg1 ;


@end


#endif