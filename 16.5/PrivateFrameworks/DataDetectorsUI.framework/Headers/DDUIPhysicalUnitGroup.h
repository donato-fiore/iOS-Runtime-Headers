// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDUIPHYSICALUNITGROUP_H
#define DDUIPHYSICALUNITGROUP_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface DDUIPhysicalUnitGroup : NSObject

@property (readonly) NSString *name; // ivar: _name
@property (readonly) BOOL restrictedLinkification; // ivar: _restrictedLinkification
@property (readonly) NSString *symbol; // ivar: _symbol
@property (readonly) NSArray *units; // ivar: _units


-(id)initWithName:(id)arg0 units:(id)arg1 restricted:(BOOL)arg2 symbol:(id)arg3 ;
-(id)symbolNameForValue:(CGFloat)arg0 unit:(id)arg1 ;


@end


#endif