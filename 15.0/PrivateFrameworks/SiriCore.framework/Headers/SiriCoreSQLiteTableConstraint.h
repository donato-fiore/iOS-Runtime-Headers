// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRICORESQLITETABLECONSTRAINT_H
#define SIRICORESQLITETABLECONSTRAINT_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SiriCoreSQLiteTableConstraint : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *columnNames; // ivar: _columnNames
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)primaryKeyTableConstraintWithName:(id)arg0 columnNames:(id)arg1 ;
+(id)uniqueTableConstraintWithName:(id)arg0 columnNames:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 type:(NSInteger)arg1 columnNames:(id)arg2 ;


@end


#endif