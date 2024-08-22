// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMMUNICATIONFILTERITEM_H
#define COMMUNICATIONFILTERITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CommunicationFilterItem : NSObject

@property (readonly, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (readonly, nonatomic) *__CFPhoneNumber phoneNumber; // ivar: _phoneNumber
@property (readonly, nonatomic) NSString *unformattedID;


-(BOOL)_acceptItemType:(id)arg0 ;
-(BOOL)_acceptVersion:(id)arg0 ;
-(BOOL)isPhoneNumber;
-(BOOL)matchesFilterItem:(id)arg0 ;
-(id)_dictionaryRepresentationWithRedaction;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithEmailAddress:(id)arg0 ;
-(id)initWithPhoneNumber:(struct __CFPhoneNumber *)arg0 ;
-(void)dealloc;


@end


#endif