// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTCHANGE_H
#define MTCHANGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTChange : NSObject

@property (retain, nonatomic) id *changedValue; // ivar: _changedValue
@property (retain, nonatomic) id *originalValue; // ivar: _originalValue
@property (copy, nonatomic) NSString *property; // ivar: _property


-(id)description;
-(id)initWithProperty:(id)arg0 changedValue:(id)arg1 originalValue:(id)arg2 ;


@end


#endif