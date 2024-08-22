// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DACONTACTSEARCHRESULTELEMENT_H
#define DACONTACTSEARCHRESULTELEMENT_H

@class NSString, NSArray, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DAContactSearchResultElement : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *alias; // ivar: _alias
@property (copy, nonatomic) NSString *appleFloor; // ivar: _appleFloor
@property (copy, nonatomic) NSString *buildingName; // ivar: _buildingName
@property (copy, nonatomic) NSString *city; // ivar: _city
@property (copy, nonatomic) NSString *company; // ivar: _company
@property (copy, nonatomic) NSString *country; // ivar: _country
@property (copy, nonatomic) NSArray *cuAddresses; // ivar: _cuAddresses
@property (copy, nonatomic) NSString *department; // ivar: _department
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (copy, nonatomic) NSString *faxPhone; // ivar: _faxPhone
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (copy, nonatomic) NSString *homePhone; // ivar: _homePhone
@property (copy, nonatomic) NSString *homePostalAddress; // ivar: _homePostalAddress
@property (copy, nonatomic) NSString *iPhone; // ivar: _iPhone
@property (retain, nonatomic) NSString *identifierOnServer; // ivar: _identifierOnServer
@property (copy, nonatomic) NSString *imService; // ivar: _imService
@property (copy, nonatomic) NSString *imUsername; // ivar: _imUsername
@property (copy, nonatomic) NSData *jpegPhoto; // ivar: _jpegPhoto
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (copy, nonatomic) NSString *mainPhone; // ivar: _mainPhone
@property (copy, nonatomic) NSString *mobilePhone; // ivar: _mobilePhone
@property (copy, nonatomic) NSString *office; // ivar: _office
@property (copy, nonatomic) NSString *pagerNumber; // ivar: _pagerNumber
@property (copy, nonatomic) NSString *postalAddress; // ivar: _postalAddress
@property (copy, nonatomic) NSString *preferredUserAddress; // ivar: _preferredUserAddress
@property (copy, nonatomic) NSString *principalPath; // ivar: _principalPath
@property (copy, nonatomic) NSString *recordName; // ivar: _recordName
@property (copy, nonatomic) NSString *serverSource; // ivar: _serverSource
@property (copy, nonatomic) NSString *state; // ivar: _state
@property (copy, nonatomic) NSString *street; // ivar: _street
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *uri; // ivar: _uri
@property (copy, nonatomic) NSString *workFaxPhone; // ivar: _workFaxPhone
@property (copy, nonatomic) NSString *workPhone; // ivar: _workPhone
@property (copy, nonatomic) NSString *zip; // ivar: _zip


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDAContactSearchResultElement:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif