// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLRESOURCELIST_H
#define MTLRESOURCELIST_H


#import <Foundation/Foundation.h>


@interface MTLResourceList : NSObject {
    ? _listPriv;
    NSUInteger _defaultHashTable;
    unsigned int _defaultHopInfo;
    NSUInteger _defaultUsedInfo;
}




-(id)initWithCapacity:(int)arg0 ;
-(void)dealloc;
-(void)releaseAllObjectsAndReset;


@end


#endif