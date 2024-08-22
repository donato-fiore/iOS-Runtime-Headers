// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNKPICKABLEPERSON_H
#define CNKPICKABLEPERSON_H

@class NSString, CNContact, NSSet, TUHandle;

#import <Foundation/Foundation.h>


@interface CNKPickablePerson : NSObject

@property (copy, nonatomic) NSString *address; // ivar: _address
@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) NSSet *destinations;
@property (retain, nonatomic) TUHandle *handle; // ivar: _handle


-(id)initWithAddress:(id)arg0 ;
-(id)initWithContact:(id)arg0 address:(id)arg1 ;
-(id)initWithContact:(id)arg0 handle:(id)arg1 ;
-(id)initWithHandle:(id)arg0 ;


@end


#endif