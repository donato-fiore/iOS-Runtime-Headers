// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTOBJECTCACHEITEM_H
#define BLTOBJECTCACHEITEM_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BLTObjectCacheItem : NSObject

@property (readonly, nonatomic) CGFloat lastAccessedDate; // ivar: _lastAccessedDate
@property (readonly, nonatomic) NSObject<NSSecureCoding> *object; // ivar: _object


+(id)cacheItemWithObject:(id)arg0 ;
-(id)description;
-(id)initWithObject:(id)arg0 ;
-(void)touch;


@end


#endif