// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLENAMESELECTION_H
#define PXPEOPLENAMESELECTION_H

@class CNContact, NSString;
@protocol PXPerson;

#import <Foundation/Foundation.h>


@interface PXPeopleNameSelection : NSObject

@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSObject<PXPerson> *person; // ivar: _person
@property (readonly, nonatomic) NSUInteger selectionType; // ivar: _selectionType


-(id)initWithContact:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 contact:(id)arg1 person:(id)arg2 type:(NSUInteger)arg3 ;
-(id)initWithSelectedPerson:(id)arg0 ;
-(void)setLinkedPerson:(id)arg0 ;


@end


#endif