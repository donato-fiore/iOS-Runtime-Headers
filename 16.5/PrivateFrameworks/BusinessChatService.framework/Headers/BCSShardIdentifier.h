// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSSHARDIDENTIFIER_H
#define BCSSHARDIDENTIFIER_H

@class NSString;
@protocol BCSFilterShardItemIdentifying, NSCopying;

#import <Foundation/Foundation.h>


@interface BCSShardIdentifier : NSObject <BCSFilterShardItemIdentifying, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger shardCount; // ivar: _shardCount
@property (nonatomic) NSInteger startIndex; // ivar: _startIndex
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif