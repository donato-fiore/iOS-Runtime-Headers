// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DACONTACTSBASEDACCOUNT_H
#define DACONTACTSBASEDACCOUNT_H

@class CNAccount, NSString;
@protocol DAContactsAccount;

#import <Foundation/Foundation.h>


@interface DAContactsBasedAccount : NSObject <DAContactsAccount>



@property (readonly, nonatomic) CNAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL markedForDeletion; // ivar: _markedForDeletion
@property (readonly) Class superclass;


-(BOOL)isAccount;
-(BOOL)isContact;
-(BOOL)isContainer;
-(BOOL)isGroup;
-(id)externalIdentifier;
-(id)identifier;
-(id)initWithAccount:(id)arg0 ;
-(int)legacyIdentifier;
-(void)markForDeletion;
-(void)updateSaveRequest:(id)arg0 ;


@end


#endif