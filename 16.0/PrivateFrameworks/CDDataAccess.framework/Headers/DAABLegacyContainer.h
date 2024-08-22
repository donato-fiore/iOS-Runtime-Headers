// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAABLEGACYCONTAINER_H
#define DAABLEGACYCONTAINER_H

@class NSString;
@protocol DAContainer;

#import <Foundation/Foundation.h>


@interface DAABLegacyContainer : NSObject <DAContainer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void source; // ivar: _source
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
-(id)initWithABSource:(*void)arg0 ;
-(id)meContactidentifier;
-(id)name;
-(id)syncData;
-(id)syncTag;
-(void)dealloc;
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