// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELPLAYBACKCONTEXT_H
#define MPCMODELPLAYBACKCONTEXT_H

@class MPPlaybackContext, NSDictionary, NSString, MPModelGenericObject, MPModelRequest, MPIdentifierSet;
@protocol MPCModelPlaybackRequestEnvironmentConsuming;


#import "MPCPlaybackRequestEnvironment.h"

@interface MPCModelPlaybackContext : MPPlaybackContext <MPCModelPlaybackRequestEnvironmentConsuming>



@property (nonatomic) BOOL allowsJumpToIt; // ivar: _allowsJumpToIt
@property (copy, nonatomic) NSDictionary *assetStoreFronts; // ivar: _assetStoreFronts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *encodedMediaLibraryUniqueID; // ivar: _encodedMediaLibraryUniqueID
@property (copy, nonatomic) NSDictionary *endTimeModifications; // ivar: _endTimeModifications
@property (copy, nonatomic) MPModelGenericObject *fallbackSectionRepresentation; // ivar: _fallbackSectionRepresentation
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // ivar: _playbackRequestEnvironment
@property (copy, nonatomic) MPModelRequest *request; // ivar: _request
@property (nonatomic) BOOL skipEncodingMediaLibraryUniqueID; // ivar: _skipEncodingMediaLibraryUniqueID
@property (copy, nonatomic) MPIdentifierSet *startItemIdentifiers; // ivar: _startItemIdentifiers
@property (copy, nonatomic) NSDictionary *startTimeModifications; // ivar: _startTimeModifications
@property (readonly) Class superclass;


+(BOOL)supportsAutoPlay;
+(BOOL)supportsSecureCoding;
+(Class)queueFeederClass;
-(BOOL)containsRestorableContent;
-(BOOL)isReusableForPlaybackContext:(id)arg0 ;
-(BOOL)isSupported;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getSharedListeningTracklistWithCompletion:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)userIdentity;
-(void)clearStartItem;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getRemotePlaybackQueueRepresentationWithCompletion:(id)arg0 ;
-(void)setUserIdentity:(id)arg0 ;
-(void)updateRequestPlaybackEnvironment;


@end


#endif