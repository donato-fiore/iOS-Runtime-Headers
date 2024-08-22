// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSQLITETRIGGER_H
#define HDSQLITETRIGGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HDSQLiteTrigger : NSObject

@property (readonly, nonatomic) Class entityClass; // ivar: _entityClass
@property (readonly, nonatomic) NSInteger event; // ivar: _event
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *predicateString; // ivar: _predicateString
@property (readonly, copy, nonatomic) NSString *triggerString; // ivar: _triggerString


-(id)creationSQL;
-(id)description;
-(id)disambiguatedName;
-(id)init;
-(id)initWithEntity:(Class)arg0 name:(id)arg1 triggerEvent:(NSInteger)arg2 predicateString:(id)arg3 triggerString:(id)arg4 ;


@end


#endif