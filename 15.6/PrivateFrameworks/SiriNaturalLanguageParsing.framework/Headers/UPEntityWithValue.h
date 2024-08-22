// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UPENTITYWITHVALUE_H
#define UPENTITYWITHVALUE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UPEntityWithValue : NSObject

@property (readonly, copy) NSString *entityName; // ivar: _entityName
@property (readonly, copy) NSString *entityType; // ivar: _entityType
@property (readonly, copy) NSString *entityValue; // ivar: _entityValue


-(BOOL)isEqualToEntityWithValue:(id)arg0 ;
-(id)description;
-(id)initWithType:(id)arg0 entityName:(id)arg1 entityValue:(id)arg2 ;


@end


#endif