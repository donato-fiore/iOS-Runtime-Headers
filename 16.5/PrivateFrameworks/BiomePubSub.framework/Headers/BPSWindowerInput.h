// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSWINDOWERINPUT_H
#define BPSWINDOWERINPUT_H

@protocol NSCopying, BPSWindowMetadata;

#import <Foundation/Foundation.h>


@interface BPSWindowerInput : NSObject

@property (readonly, nonatomic) id *aggregate; // ivar: _aggregate
@property (readonly, nonatomic) NSObject<NSCopying> *key; // ivar: _key
@property (readonly, nonatomic) NSObject<BPSWindowMetadata> *metadata; // ivar: _metadata


+(id)new;
-(id)init;
-(id)initWithAggregate:(id)arg0 key:(id)arg1 metadata:(id)arg2 ;


@end


#endif