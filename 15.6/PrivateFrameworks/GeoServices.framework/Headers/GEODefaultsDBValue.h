// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEODEFAULTSDBVALUE_H
#define GEODEFAULTSDBVALUE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEODefaultsDBCollection.h"

@interface GEODefaultsDBValue : NSObject

@property (nonatomic) NSInteger dbId; // ivar: _dbId
@property (readonly, weak, nonatomic) GEODefaultsDBCollection *parent; // ivar: _parent
@property (retain, nonatomic) NSString *type; // ivar: _type
@property (retain, nonatomic) id *value; // ivar: _value


+(id)dbValue:(id)arg0 type:(id)arg1 value:(id)arg2 ;
-(id)initWithParent:(id)arg0 type:(id)arg1 value:(id)arg2 ;


@end


#endif