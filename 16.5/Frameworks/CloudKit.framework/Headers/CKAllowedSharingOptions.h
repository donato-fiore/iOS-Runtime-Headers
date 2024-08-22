// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKALLOWEDSHARINGOPTIONS_H
#define CKALLOWEDSHARINGOPTIONS_H

@class NSString, NSArray, _SWCollaborationShareOptions;
@protocol NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKAllowedSharingOptions : NSObject <NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying>



@property NSUInteger allowedParticipantAccessOptions; // ivar: _allowedParticipantAccessOptions
@property NSUInteger allowedParticipantPermissionOptions; // ivar: _allowedParticipantPermissionOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *mutableOptionsGroups; // ivar: _mutableOptionsGroups
@property (retain, nonatomic) _SWCollaborationShareOptions *mutableShareOptions; // ivar: _mutableShareOptions
@property (readonly, nonatomic) NSArray *optionsGroups;
@property (readonly, nonatomic) _SWCollaborationShareOptions *shareOptions;
@property (readonly) Class superclass;
@property BOOL supportAllowingAddedParticipantsToInviteOthers; // ivar: _supportAllowingAddedParticipantsToInviteOthers
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


+(BOOL)supportsSecureCoding;
+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)readableTypeIdentifiersForItemProvider;
+(id)resolvedOptionsFromOptions:(id)arg0 forExistingShare:(id)arg1 ;
+(id)standardOptions;
-(BOOL)_optionsGroupsOnlyContainsSingleOptionInPermissionArrayAndWhoCanAccessArray:(id)arg0 ;
-(NSInteger)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg0 ;
-(id)_uncachedCollaborationOptionsGroupsFromAllowedOptions;
-(id)_uncachedShareOptionsFromAllowedOptions;
-(id)collaborationOptionsGroupsFromAllowedOptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAllowedParticipantPermissionOptions:(NSUInteger)arg0 allowedParticipantAccessOptions:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(void)_addOptions:(id)arg0 toExistingGroupWithID:(id)arg1 inOptionsGroups:(id)arg2 ;
-(void)_removeOptionGroupWithID:(id)arg0 fromOptionsGroups:(id)arg1 ;
-(void)_resolveCollaborationOptionsGroupsForExistingShare:(id)arg0 ;
-(void)_selectOptionWithIdentifier:(id)arg0 inGroups:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif