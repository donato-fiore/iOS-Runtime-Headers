// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNVCARDPARSEDPARAMETER_H
#define CNVCARDPARSEDPARAMETER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CNVCardParsedParameter : NSObject

@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSArray *values; // ivar: _values


+(id)parameterWithName:(id)arg0 values:(id)arg1 ;
-(id)description;
-(id)initWithName:(id)arg0 values:(id)arg1 ;


@end


#endif