// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTACTCONTENTITEMCHANGETRANSACTION_H
#define WFCONTACTCONTENTITEMCHANGETRANSACTION_H

@class NSArray, CNMutableContact;


#import "WFContentItemChangeTransaction.h"

@interface WFContactContentItemChangeTransaction : WFContentItemChangeTransaction

@property (retain, nonatomic) NSArray *groupChangeRequest; // ivar: _groupChangeRequest
@property (readonly, nonatomic) CNMutableContact *mutableContact; // ivar: _mutableContact


-(id)initWithContentItem:(id)arg0 ;
// -(void)saveWithCompletionHandler:(id)arg0 isNew:(unk)arg1  ;
-(void)updateEmailAddresses:(id)arg0 ;
-(void)updatePhoneNumbers:(id)arg0 ;
-(void)updateStreetAddresses:(id)arg0 ;
-(void)updateURLs:(id)arg0 ;


@end


#endif