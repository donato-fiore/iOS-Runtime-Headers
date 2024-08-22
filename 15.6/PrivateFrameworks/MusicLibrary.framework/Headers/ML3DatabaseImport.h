// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3DATABASEIMPORT_H
#define ML3DATABASEIMPORT_H

@class NSFileHandle, NSString, NSData;
@protocol NSCopying, NSMutableCopying, NSSecureCoding, OS_tcc_identity;

#import <Foundation/Foundation.h>


@interface ML3DatabaseImport : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) NSObject<OS_tcc_identity> *clientIdentity; // ivar: _clientIdentity
@property (readonly, nonatomic) NSFileHandle *fileHandle; // ivar: _fileHandle
@property (readonly, nonatomic) unsigned int homeSharingBasePlaylistID; // ivar: _homeSharingBasePlaylistID
@property (readonly, nonatomic) BOOL isServerImport; // ivar: _isServerImport
@property (readonly, nonatomic) NSString *libraryPath; // ivar: _libraryPath
@property (readonly, nonatomic, getter=isPendingMatch) BOOL pendingMatch; // ivar: _pendingMatch
@property (readonly, nonatomic) NSData *playlistData; // ivar: _playlistData
@property (readonly, nonatomic) BOOL playlistsAreLibraryOwnedContent; // ivar: _playlistsAreLibraryOwnedContent
@property (readonly, nonatomic) NSInteger preferredVideoQuality; // ivar: _preferredVideoQuality
@property (readonly, nonatomic, getter=isResetSync) BOOL resetSync; // ivar: _resetSync
@property (readonly, nonatomic, getter=isSagaEnabled) BOOL sagaEnabled; // ivar: _sagaEnabled
@property (readonly, nonatomic) NSInteger storeAccountID; // ivar: _storeAccountID
@property (readonly, nonatomic, getter=isSuspendable) BOOL suspendable; // ivar: _suspendable
@property (readonly, nonatomic) NSString *syncAnchor; // ivar: _syncAnchor
@property (readonly, nonatomic) NSString *syncLibraryID; // ivar: _syncLibraryID
@property (readonly, nonatomic) NSData *trackData; // ivar: _trackData
@property (readonly, nonatomic) BOOL tracksAreLibraryOwnedContent; // ivar: _tracksAreLibraryOwnedContent


+(BOOL)supportsSecureCoding;
-(id)_copyWithZone:(struct _NSZone *)arg0 usingConcreteClass:(Class)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLibraryPath:(id)arg0 trackData:(id)arg1 playlistData:(id)arg2 ;
-(id)initWithLibraryPath:(id)arg0 trackData:(id)arg1 playlistData:(id)arg2 clientIdentity:(id)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif