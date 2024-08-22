// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UNMUTABLENOTIFICATIONCONTACT_H
#define _UNMUTABLENOTIFICATIONCONTACT_H

@class UNNotificationContact, NSString;



@interface _UNMutableNotificationContact : UNNotificationContact

@property (copy, nonatomic) NSString *cnContactFullname;
@property (copy, nonatomic) NSString *cnContactIdentifier;
@property (nonatomic, getter=isCNContactIdentifierSuggested) BOOL cnContactIdentifierSuggested;
@property (copy, nonatomic) NSString *customIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic, getter=isDisplayNameSuggested) BOOL displayNameSuggested;
@property (copy, nonatomic) NSString *handle;
@property (nonatomic) NSInteger handleType;
@property (copy, nonatomic) NSString *serviceName;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif