// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DACONTACTSGROUP_H
#define DACONTACTSGROUP_H

@class NSString, CNMutableGroup;
@protocol DAGroup;

#import <Foundation/Foundation.h>


@interface DAContactsGroup : NSObject <DAGroup>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CNMutableGroup *group; // ivar: _group
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL markedForDeletion; // ivar: _markedForDeletion
@property (readonly) Class superclass;


-(*void)asABGroup;
-(BOOL)isAccount;
-(BOOL)isContact;
-(BOOL)isContainer;
-(BOOL)isGroup;
-(id)asGroup;
-(id)eTag;
-(id)externalIdentifier;
-(id)externalUUID;
-(id)initWithGroup:(id)arg0 ;
-(int)legacyIdentifier;
-(void)markForDeletion;
-(void)setETag:(id)arg0 ;
-(void)setExternalIdentifier:(id)arg0 ;
-(void)setExternalUUID:(id)arg0 ;
-(void)updateSaveRequest:(id)arg0 ;


@end


#endif