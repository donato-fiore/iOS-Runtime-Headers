// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMBUSINESSUSERATTRIBUTES_H
#define EDAMBUSINESSUSERATTRIBUTES_H

@class NSNumber, NSString;


#import "FATObject.h"

@interface EDAMBusinessUserAttributes : FATObject

@property (retain, nonatomic) NSNumber *companyStartDate; // ivar: _companyStartDate
@property (retain, nonatomic) NSString *department; // ivar: _department
@property (retain, nonatomic) NSString *linkedInProfileUrl; // ivar: _linkedInProfileUrl
@property (retain, nonatomic) NSString *location; // ivar: _location
@property (retain, nonatomic) NSString *mobilePhone; // ivar: _mobilePhone
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *workPhone; // ivar: _workPhone


+(id)structFields;
+(id)structName;


@end


#endif