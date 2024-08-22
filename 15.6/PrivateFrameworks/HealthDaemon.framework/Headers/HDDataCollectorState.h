// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDATACOLLECTORSTATE_H
#define HDDATACOLLECTORSTATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HDDataCollectorState : NSObject <NSCopying>



@property (nonatomic) NSUInteger collectionType; // ivar: _collectionType
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (nonatomic) NSUInteger sourceType; // ivar: _sourceType


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif