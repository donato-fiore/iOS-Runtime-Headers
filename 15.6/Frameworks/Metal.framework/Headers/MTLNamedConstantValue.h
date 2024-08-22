// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLNAMEDCONSTANTVALUE_H
#define MTLNAMEDCONSTANTVALUE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTLNamedConstantValue : NSObject

@property (readonly) *void data; // ivar: _data
@property (readonly) NSUInteger dataType; // ivar: _dataType
@property (readonly) NSString *name; // ivar: _name


-(id)describe;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithValue:(*void)arg0 type:(NSUInteger)arg1 name:(id)arg2 ;
-(void)dealloc;


@end


#endif