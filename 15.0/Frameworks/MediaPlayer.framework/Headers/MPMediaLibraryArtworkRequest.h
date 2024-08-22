// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIALIBRARYARTWORKREQUEST_H
#define MPMEDIALIBRARYARTWORKREQUEST_H

@class NSString, NSNumber, ML3MusicLibrary, ICUserIdentity;
@protocol MPArtworkTokenParametersRepresenting, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPMediaLibrary.h"
#import "MPMediaLibraryArtwork.h"

@interface MPMediaLibraryArtworkRequest : NSObject <MPArtworkTokenParametersRepresenting>

 {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSUInteger _mediaType;
    BOOL _hasRetrievedTokens;
}


@property (readonly, nonatomic) NSInteger artworkType; // ivar: _artworkType
@property (copy, nonatomic) NSString *availableArtworkToken; // ivar: _availableArtworkToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger entityType; // ivar: _entityType
@property (copy, nonatomic) NSNumber *fetchableArtworkSource; // ivar: _fetchableArtworkSource
@property (copy, nonatomic) NSString *fetchableArtworkToken; // ivar: _fetchableArtworkToken
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MPMediaLibrary *library; // ivar: _library
@property (readonly, nonatomic) MPMediaLibraryArtwork *libraryArtwork; // ivar: _libraryArtwork
@property (readonly, nonatomic) NSUInteger libraryID; // ivar: _libraryID
@property (readonly, nonatomic) NSUInteger mediaType;
@property (readonly, nonatomic) ML3MusicLibrary *musicLibrary;
@property (nonatomic) CGFloat retrievalTime; // ivar: _retrievalTime
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity


+(id)artworkTokenWithParameters:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)artworkTokenParameters;
-(id)initWithLibrary:(id)arg0 identifier:(NSUInteger)arg1 entityType:(NSInteger)arg2 artworkType:(NSInteger)arg3 ;
-(id)initWithLibrary:(id)arg0 identifier:(NSUInteger)arg1 entityType:(NSInteger)arg2 artworkType:(NSInteger)arg3 mediaType:(NSUInteger)arg4 ;
-(void)_onQueue_updateTokens;
-(void)clearFailedFetchableToken;
-(void)promoteFetchableArtworkTokenIfNeeded;


@end


#endif