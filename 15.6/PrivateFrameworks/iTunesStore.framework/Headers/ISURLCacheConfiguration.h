// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISURLCACHECONFIGURATION_H
#define ISURLCACHECONFIGURATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ISURLCacheConfiguration : NSObject <NSCopying>



@property (nonatomic) NSUInteger diskCapacity; // ivar: _diskCapacity
@property (nonatomic) NSUInteger memoryCapacity; // ivar: _memoryCapacity
@property (copy, nonatomic) NSString *persistentIdentifier; // ivar: _persistentIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif