// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DACONTACTSCONTAINER_H
#define DACONTACTSCONTAINER_H

@class NSString, CNMutableContainer;
@protocol DAContainer;

#import <Foundation/Foundation.h>


@interface DAContactsContainer : NSObject <DAContainer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isGuardianRestricted) BOOL guardianRestricted;
@property (nonatomic, getter=isGuardianStateDirty) BOOL guardianStateDirty;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL markedAsDefault; // ivar: _markedAsDefault
@property (nonatomic) BOOL markedForDeletion; // ivar: _markedForDeletion
@property (readonly, nonatomic) CNMutableContainer *mutableContainer; // ivar: _mutableContainer
@property (readonly) Class superclass;


-(*void)asSource;
-(BOOL)arePropertiesReadonly;
-(BOOL)isAccount;
-(BOOL)isContact;
-(BOOL)isContainer;
-(BOOL)isContentReadonly;
-(BOOL)isGroup;
-(BOOL)isLocal;
-(BOOL)isSearchContainer;
-(NSInteger)type;
-(id)accountIdentifier;
-(id)asContainer;
-(id)cTag;
-(id)constraintsPath;
-(id)externalIdentifier;
-(id)identifier;
-(id)initWithCNContainer:(id)arg0 ;
-(id)meContactIdentifier;
-(id)name;
-(id)syncData;
-(id)syncTag;
-(void)markAsDefault;
-(void)markForDeletion;
-(void)setAccountIdentifier:(id)arg0 ;
-(void)setArePropertiesReadonly:(BOOL)arg0 ;
-(void)setCTag:(id)arg0 ;
-(void)setConstraintsPath:(id)arg0 ;
-(void)setContentReadonly:(BOOL)arg0 ;
-(void)setExternalIdentifier:(id)arg0 ;
-(void)setMeContactIdentifier:(id)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setSyncData:(id)arg0 ;
-(void)setSyncTag:(id)arg0 ;
-(void)setType:(NSInteger)arg0 ;
-(void)updateSaveRequest:(id)arg0 ;


@end


#endif