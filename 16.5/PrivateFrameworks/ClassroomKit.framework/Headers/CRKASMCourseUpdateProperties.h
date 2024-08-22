// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKASMCOURSEUPDATEPROPERTIES_H
#define CRKASMCOURSEUPDATEPROPERTIES_H

@class NSNumber, NSString, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CRKASMCourseUpdateProperties : NSObject <NSCopying>



@property (retain, nonatomic) NSNumber *color; // ivar: _color
@property (retain, nonatomic) NSNumber *mascot; // ivar: _mascot
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSSet *trustedUsersToAdd; // ivar: _trustedUsersToAdd
@property (copy, nonatomic) NSSet *trustedUsersToRemove; // ivar: _trustedUsersToRemove
@property (copy, nonatomic) NSSet *usersToAdd; // ivar: _usersToAdd
@property (copy, nonatomic) NSSet *usersToRemove; // ivar: _usersToRemove


-(BOOL)areFulfilledByCourse:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif