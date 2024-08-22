// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RADIORECENTSTATIONSGROUP_H
#define RADIORECENTSTATIONSGROUP_H

@class NSString, NSArray;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface RadioRecentStationsGroup : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, copy, nonatomic) NSArray *stations; // ivar: _stations


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_copyWithRecentStationsGroupClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif