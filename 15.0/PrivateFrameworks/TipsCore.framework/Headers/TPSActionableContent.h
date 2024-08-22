// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSACTIONABLECONTENT_H
#define TPSACTIONABLECONTENT_H

@class NSArray;


#import "TPSContent.h"

@interface TPSActionableContent : TPSContent

@property (copy, nonatomic) NSArray *actions; // ivar: _actions


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 metadata:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif