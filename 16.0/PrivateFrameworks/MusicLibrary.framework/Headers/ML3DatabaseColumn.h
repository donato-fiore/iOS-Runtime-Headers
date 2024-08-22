// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3DATABASECOLUMN_H
#define ML3DATABASECOLUMN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ML3DatabaseColumn : NSObject

@property (readonly, nonatomic) NSUInteger columnConstraints; // ivar: _columnConstraints
@property (readonly, nonatomic) NSUInteger datatype; // ivar: _datatype
@property (readonly, nonatomic) id *defaultValue; // ivar: _defaultValue
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(id)columnWithName:(id)arg0 datatype:(NSUInteger)arg1 constraints:(NSUInteger)arg2 defaultValue:(id)arg3 ;
-(id)_columnDefinitionSQL;
-(id)description;
-(id)initWithName:(id)arg0 datatype:(NSUInteger)arg1 constraints:(NSUInteger)arg2 defaultValue:(id)arg3 ;


@end


#endif