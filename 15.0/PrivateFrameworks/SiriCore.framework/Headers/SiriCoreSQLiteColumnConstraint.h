// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRICORESQLITECOLUMNCONSTRAINT_H
#define SIRICORESQLITECOLUMNCONSTRAINT_H

@class NSString;
@protocol NSCopying, SiriCoreSQLiteValue;

#import <Foundation/Foundation.h>


@interface SiriCoreSQLiteColumnConstraint : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSObject<SiriCoreSQLiteValue> *value; // ivar: _value


+(id)defaultColumnConstraintWithName:(id)arg0 value:(id)arg1 ;
+(id)notNullColumnConstraintWithName:(id)arg0 ;
+(id)primaryKeyColumnConstraintWithName:(id)arg0 usesAutoIncrement:(BOOL)arg1 ;
+(id)uniqueColumnConstraintWithName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 type:(NSInteger)arg1 value:(id)arg2 options:(NSUInteger)arg3 ;


@end


#endif