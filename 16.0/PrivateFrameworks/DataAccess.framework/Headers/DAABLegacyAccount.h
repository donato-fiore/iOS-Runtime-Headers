// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAABLEGACYACCOUNT_H
#define DAABLEGACYACCOUNT_H

@class NSString;
@protocol DAContactsAccount;

#import <Foundation/Foundation.h>


@interface DAABLegacyAccount : NSObject <DAContactsAccount>



@property (readonly, nonatomic) *void account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isAccount;
-(BOOL)isContact;
-(BOOL)isContainer;
-(BOOL)isGroup;
-(id)externalIdentifier;
-(id)identifier;
-(id)initWithABAccout:(*void)arg0 ;
-(int)legacyIdentifier;
-(void)dealloc;
-(void)markForDeletion;
-(void)updateSaveRequest:(id)arg0 ;


@end


#endif