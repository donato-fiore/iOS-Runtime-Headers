// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DACONTACTSCONTACT_H
#define DACONTACTSCONTACT_H

@class NSString, CNMutableContact;
@protocol DAContact;

#import <Foundation/Foundation.h>


@interface DAContactsContact : NSObject <DAContact>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL markedForDeletion; // ivar: _markedForDeletion
@property (readonly, nonatomic) CNMutableContact *mutableContact; // ivar: _mutableContact
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
-(id)initWithContact:(id)arg0 ;
-(int)legacyIdentifier;
-(void)markForDeletion;
-(void)setETag:(id)arg0 ;
-(void)setExternalIdentifier:(id)arg0 ;
-(void)setExternalUUID:(id)arg0 ;
-(void)updateSaveRequest:(id)arg0 ;


@end


#endif