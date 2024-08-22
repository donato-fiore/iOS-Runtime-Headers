// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEPICKERMOCKPERSON_H
#define PXPEOPLEPICKERMOCKPERSON_H

@class PHPerson, NSString;



@interface PXPeoplePickerMockPerson : PHPerson

@property (retain, nonatomic) NSString *mockLocalIdentifier; // ivar: _mockLocalIdentifier
@property (retain, nonatomic) NSString *mockName; // ivar: _mockName


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithLocalIdentifier:(id)arg0 displayName:(id)arg1 ;
-(id)localIdentifier;
-(id)px_localizedName;


@end


#endif