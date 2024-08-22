// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRICORESQLITECOLUMNDESCRIPTION_H
#define SIRICORESQLITECOLUMNDESCRIPTION_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SiriCoreSQLiteColumnDescription : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *constraints; // ivar: _constraints
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(id)integerPrimaryKeyColumnWithName:(id)arg0 ;
+(id)uniqueTextColumnWithName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 type:(id)arg1 constraints:(id)arg2 ;
-(id)initWithName:(id)arg0 type:(id)arg1 constraintsProvider:(id)arg2 ;


@end


#endif