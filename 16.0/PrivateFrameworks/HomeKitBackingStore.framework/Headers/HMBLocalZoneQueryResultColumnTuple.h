// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBLOCALZONEQUERYRESULTCOLUMNTUPLE_H
#define HMBLOCALZONEQUERYRESULTCOLUMNTUPLE_H

@class HMFObject, NSString;


#import "HMBModelField.h"

@interface HMBLocalZoneQueryResultColumnTuple : HMFObject

@property (readonly, nonatomic) HMBModelField *modelField; // ivar: _modelField
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) int offset; // ivar: _offset


-(id)description;
-(id)initWithName:(id)arg0 offset:(int)arg1 modelField:(id)arg2 ;


@end


#endif