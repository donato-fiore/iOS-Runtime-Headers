// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGCONTACTDETAILSHOLDER_H
#define SGCONTACTDETAILSHOLDER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "SGContactDetail.h"

@interface SGContactDetailsHolder : NSObject

@property (retain, nonatomic) SGContactDetail *birthday; // ivar: _birthday
@property (retain, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (retain, nonatomic) NSArray *instantMessageAddresses; // ivar: _instantMessageAddresses
@property (retain, nonatomic) NSArray *phoneNumbers; // ivar: _phoneNumbers
@property (retain, nonatomic) SGContactDetail *photoPath; // ivar: _photoPath
@property (retain, nonatomic) NSArray *postalAddresses; // ivar: _postalAddresses
@property (retain, nonatomic) NSArray *socialProfiles; // ivar: _socialProfiles




@end


#endif