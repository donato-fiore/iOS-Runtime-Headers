// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NAUINAMEDVIEWCONSTRAINTS_H
#define _NAUINAMEDVIEWCONSTRAINTS_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface _NAUINamedViewConstraints : NSObject

@property (readonly, nonatomic) NSArray *constraints; // ivar: _constraints
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) id *stalenessToken; // ivar: _stalenessToken


-(id)initWithName:(id)arg0 constraints:(id)arg1 stalenessToken:(id)arg2 ;


@end


#endif