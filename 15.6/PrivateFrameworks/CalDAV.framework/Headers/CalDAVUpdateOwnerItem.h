// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVUPDATEOWNERITEM_H
#define CALDAVUPDATEOWNERITEM_H

@class CoreDAVItem, NSURL, NSString, ICSDateValue;



@interface CalDAVUpdateOwnerItem : CoreDAVItem

@property (retain, nonatomic) NSURL *address; // ivar: _address
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) ICSDateValue *dtstamp; // ivar: _dtstamp
@property (retain, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber


-(id)copyParseRules;
-(id)description;


@end


#endif