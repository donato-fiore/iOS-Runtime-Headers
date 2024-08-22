// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSICACHEDGROUP_H
#define PSICACHEDGROUP_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PSICachedGroup : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger category; // ivar: _category
@property (nonatomic) NSUInteger groupId; // ivar: _groupId
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger owningGroupId; // ivar: _owningGroupId
@property (readonly, nonatomic) NSString *text; // ivar: _text


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithText:(id)arg0 identifier:(id)arg1 category:(NSUInteger)arg2 owningGroupId:(NSUInteger)arg3 ;


@end


#endif