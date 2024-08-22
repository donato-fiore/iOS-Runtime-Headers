// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FFFEATUREATTRIBUTE_H
#define FFFEATUREATTRIBUTE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FFFeatureAttribute : NSObject

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *value; // ivar: _value


-(BOOL)matchesAgainst:(id)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 value:(id)arg1 ;


@end


#endif