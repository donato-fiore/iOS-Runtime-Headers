// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFCACHEENTRY_H
#define PFCACHEENTRY_H

@protocol NSCopying><NSObject;

#import <Foundation/Foundation.h>


@interface PFCacheEntry : NSObject {
    id<NSCopying><NSObject> *_key;
    id *_value;
    NSUInteger _createTime;
    NSUInteger _lastReadTime;
    NSUInteger _readCount;
}




-(NSUInteger)createTime;
-(NSUInteger)lastReadTime;
-(NSUInteger)readCount;
-(id)description;
-(id)initWithKey:(id)arg0 value:(id)arg1 ;
-(id)key;
-(id)value;
-(void)touch;


@end


#endif