// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITRAITSTORAGELIST_H
#define _UITRAITSTORAGELIST_H

@class NSSet, NSArray;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface _UITraitStorageList : NSObject <NSCoding>



@property (readonly, nonatomic) NSSet *descendants; // ivar: _descendants
@property (readonly, weak, nonatomic) id *topLevelObject; // ivar: _topLevelObject
@property (readonly, nonatomic) NSArray *traitStorages; // ivar: _traitStorages


-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTopLevelObject:(id)arg0 traitStorages:(id)arg1 descendants:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif