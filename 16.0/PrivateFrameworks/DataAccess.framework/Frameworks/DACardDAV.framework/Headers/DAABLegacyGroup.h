// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAABLEGACYGROUP_H
#define DAABLEGACYGROUP_H

@class NSString;
@protocol DAGroup;

#import <Foundation/Foundation.h>


@interface DAABLegacyGroup : NSObject <DAGroup>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *void group; // ivar: _group
@property (readonly) NSUInteger hash;
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
-(id)initWithGroup:(*void)arg0 ;
-(int)legacyIdentifier;
-(void)dealloc;
-(void)markForDeletion;
-(void)setETag:(id)arg0 ;
-(void)setExternalIdentifier:(id)arg0 ;
-(void)setExternalUUID:(id)arg0 ;
-(void)updateSaveRequest:(id)arg0 ;


@end


#endif