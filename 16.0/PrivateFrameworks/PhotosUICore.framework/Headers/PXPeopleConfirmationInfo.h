// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLECONFIRMATIONINFO_H
#define PXPEOPLECONFIRMATIONINFO_H

@class NSString, NSSet, PHPerson;

#import <Foundation/Foundation.h>


@interface PXPeopleConfirmationInfo : NSObject

@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSSet *otherPersons; // ivar: _otherPersons
@property (readonly, nonatomic) PHPerson *sourcePerson; // ivar: _sourcePerson
@property (readonly, nonatomic) PHPerson *targetPerson; // ivar: _targetPerson
@property (readonly, nonatomic) BOOL wasNaming; // ivar: _wasNaming


-(id)description;
-(id)initWithBootstrapContext:(id)arg0 ;
-(id)initWithSourcePerson:(id)arg0 targetPerson:(id)arg1 confirmedSuggestions:(id)arg2 ;


@end


#endif