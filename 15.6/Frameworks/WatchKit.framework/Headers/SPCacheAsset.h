// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPCACHEASSET_H
#define SPCACHEASSET_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SPCacheAsset : NSObject

@property (nonatomic) CGFloat accessDate; // ivar: _accessDate
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) NSUInteger size; // ivar: _size
@property (nonatomic) NSUInteger state; // ivar: _state


+(id)fromProto:(id)arg0 ;
+(id)toProto:(id)arg0 ;
-(id)initWithName:(id)arg0 size:(NSUInteger)arg1 state:(NSUInteger)arg2 accessDate:(id)arg3 ;


@end


#endif