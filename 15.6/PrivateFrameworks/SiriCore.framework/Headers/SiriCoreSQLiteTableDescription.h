// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRICORESQLITETABLEDESCRIPTION_H
#define SIRICORESQLITETABLEDESCRIPTION_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SiriCoreSQLiteTableDescription : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *columns; // ivar: _columns
@property (readonly, copy, nonatomic) NSArray *constraints; // ivar: _constraints
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 columns:(id)arg1 constraints:(id)arg2 ;
// -(id)initWithName:(id)arg0 columnsProvider:(id)arg1 constraintsProvider:(unk)arg2  ;


@end


#endif