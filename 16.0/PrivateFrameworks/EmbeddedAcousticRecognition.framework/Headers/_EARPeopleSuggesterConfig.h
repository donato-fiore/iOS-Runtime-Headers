// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EARPEOPLESUGGESTERCONFIG_H
#define _EARPEOPLESUGGESTERCONFIG_H


#import <Foundation/Foundation.h>


@interface _EARPeopleSuggesterConfig : NSObject

@property (readonly, nonatomic) unsigned int bestContactsBonus; // ivar: _bestContactsBonus
@property (readonly, nonatomic) unsigned int bestContactsCount; // ivar: _bestContactsCount
@property (readonly, nonatomic) unsigned int contactsCount; // ivar: _contactsCount


-(id)initWithContactsCount:(unsigned int)arg0 bestContactsCount:(unsigned int)arg1 bestContactsBonus:(unsigned int)arg2 ;


@end


#endif