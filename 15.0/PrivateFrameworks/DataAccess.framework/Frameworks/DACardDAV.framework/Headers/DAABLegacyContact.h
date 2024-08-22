// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAABLEGACYCONTACT_H
#define DAABLEGACYCONTACT_H

@class NSString;
@protocol DAContact;

#import <Foundation/Foundation.h>


@interface DAABLegacyContact : NSObject <DAContact>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void person; // ivar: _person
@property (readonly) Class superclass;


-(*void)asPerson;
-(BOOL)isAccount;
-(BOOL)isContact;
-(BOOL)isContainer;
-(BOOL)isGroup;
-(id)asContact;
-(id)eTag;
-(id)externalIdentifier;
-(id)externalUUID;
-(id)initWithABPerson:(*void)arg0 ;
-(int)legacyIdentifier;
-(void)dealloc;
-(void)markForDeletion;
-(void)setETag:(id)arg0 ;
-(void)setExternalIdentifier:(id)arg0 ;
-(void)setExternalUUID:(id)arg0 ;
-(void)updateSaveRequest:(id)arg0 ;


@end


#endif