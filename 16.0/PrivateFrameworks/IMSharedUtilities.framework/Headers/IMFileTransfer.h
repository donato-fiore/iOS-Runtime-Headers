// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMFILETRANSFER_H
#define IMFILETRANSFER_H

@class NSDictionary, NSString, NSArray, NSData, NSDate, NSURL;

#import <Foundation/Foundation.h>


@interface IMFileTransfer : NSObject

@property (retain, nonatomic) NSDictionary *AuxTranscoderUserInfo; // ivar: _AuxTranscoderUserInfo
@property (readonly, nonatomic) NSUInteger _lastAveragedBytes; // ivar: _lastAveragedBytes
@property (nonatomic, setter=_setLastAveragedInterval:) CGFloat _lastAveragedInterval; // ivar: _lastAveragedInterval
@property (nonatomic, setter=_setLastUpdatedInterval:) CGFloat _lastUpdatedInterval; // ivar: _lastUpdatedInterval
@property (nonatomic, setter=_setNeedsWrapper:) BOOL _needsWrapper; // ivar: _needsWrapper
@property (retain, nonatomic) NSString *accountID; // ivar: _accountID
@property (nonatomic) BOOL appMessageFallbackImage; // ivar: _appMessageFallbackImage
@property (retain, nonatomic) NSArray *attachmentSendContexts; // ivar: _attachmentSendContexts
@property (retain, nonatomic) NSDictionary *attributionInfo; // ivar: _attributionInfo
@property (nonatomic) BOOL auxStateWasDowngraded; // ivar: _auxStateWasDowngraded
@property (nonatomic) NSUInteger averageTransferRate; // ivar: _averageTransferRate
@property (readonly, nonatomic) BOOL canBeAccepted;
@property (readonly, nonatomic) BOOL canMarkPurgable;
@property (retain, nonatomic) NSString *cloudKitRecordID; // ivar: _cloudKitRecordID
@property (retain, nonatomic) NSData *cloudKitServerChangeTokenBlob; // ivar: _cloudKitServerChangeTokenBlob
@property (nonatomic) NSInteger cloudKitSyncState; // ivar: _cloudKitSyncState
@property (nonatomic) NSInteger commSafetySensitive; // ivar: _commSafetySensitive
@property (retain, nonatomic) NSDate *createdDate; // ivar: _createdDate
@property (nonatomic) NSUInteger currentBytes; // ivar: _currentBytes
@property (readonly, retain, nonatomic) NSString *displayName;
@property (nonatomic, setter=_setError:) NSInteger error; // ivar: _error
@property (retain, nonatomic, setter=_setErrorDescription:) NSString *errorDescription; // ivar: _errorDescription
@property (readonly, nonatomic) BOOL existsAtLocalPath;
@property (nonatomic, setter=_setFetchOptions:) NSInteger fetchOptions; // ivar: _fetchOptions
@property (retain, nonatomic) NSString *filename; // ivar: _filename
@property (retain, nonatomic) NSString *guid; // ivar: _guid
@property (nonatomic) unsigned int hfsCreator; // ivar: _hfsCreator
@property (nonatomic) unsigned short hfsFlags; // ivar: _hfsFlags
@property (nonatomic) unsigned int hfsType; // ivar: _hfsType
@property (nonatomic) BOOL hideAttachment; // ivar: _hideAttachment
@property (readonly, nonatomic) BOOL isAnimojiV2;
@property (readonly, nonatomic) BOOL isAutoloopVideo;
@property (nonatomic) BOOL isAuxImage; // ivar: _isAuxImage
@property (nonatomic) BOOL isAuxVideo; // ivar: _isAuxVideo
@property (nonatomic) BOOL isContact; // ivar: _isContact
@property (nonatomic) BOOL isDirectory; // ivar: _isDirectory
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL isFromMomentShare;
@property (readonly, nonatomic) BOOL isHEVCWithAlphaVideo;
@property (nonatomic) BOOL isIncoming; // ivar: _isIncoming
@property (nonatomic) BOOL isLocation; // ivar: _isLocation
@property (readonly, nonatomic) BOOL isOpusAudioMessage;
@property (readonly, nonatomic) BOOL isRecipeBasedSticker;
@property (nonatomic) BOOL isSticker; // ivar: _isSticker
@property (retain, nonatomic, setter=_setLocalPath:) NSString *localPath;
@property (retain, nonatomic, setter=_setLocalURL:) NSURL *localURL; // ivar: _localURL
@property (retain, nonatomic) NSString *messageGUID; // ivar: _messageGUID
@property (readonly, retain, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (retain, nonatomic) NSString *originalGUID; // ivar: _originalGUID
@property (retain, nonatomic) NSString *otherPerson; // ivar: _otherPerson
@property (readonly, retain, nonatomic) NSString *permanentHighQualityLocalPath;
@property (retain, nonatomic) NSDate *refreshDate;
@property (copy, nonatomic) NSString *sandboxToken; // ivar: _sandboxToken
@property (readonly, nonatomic) NSURL *shareURL;
@property (nonatomic) BOOL shouldAttemptToResume; // ivar: _shouldAttemptToResume
@property (nonatomic, setter=_setForceArchive:) BOOL shouldForceArchive; // ivar: _shouldForceArchive
@property (retain, nonatomic, setter=_setStartDate:) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSDictionary *stickerUserInfo; // ivar: _stickerUserInfo
@property (readonly, retain, nonatomic) NSString *temporaryHighQualityLocalPath;
@property (retain, nonatomic) NSURL *temporaryHighQualityLocalURL; // ivar: _temporaryHighQualityLocalURL
@property (nonatomic) NSUInteger totalBytes; // ivar: _totalBytes
@property (retain, nonatomic) NSDictionary *transcoderUserInfo; // ivar: _transcoderUserInfo
@property (retain, nonatomic, setter=_setTransferDataURL:) NSURL *transferDataURL; // ivar: _transferDataURL
@property (nonatomic, setter=_setTransferState:) NSInteger transferState; // ivar: _transferState
@property (retain, nonatomic) NSString *transferredFilename; // ivar: _transferredFilename
@property (retain, nonatomic) NSString *type; // ivar: _utiType
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _localUserInfo
@property (readonly, nonatomic) BOOL wantsAlphaRemoved;
@property (nonatomic, setter=setRegisteredAsStandalone:) BOOL wasRegisteredAsStandalone; // ivar: _wasRegisteredAsStandalone


+(BOOL)_doesLocalURLRequireArchiving:(id)arg0 ;
+(id)AuxGUIDFromFileTransferGUID:(id)arg0 ;
+(id)_dictionaryRepresentationGUIDKey;
+(id)guidByStrippingAuxPrefix:(id)arg0 ;
+(id)guidForFileTransferDictionary:(id)arg0 ;
+(id)whitelistedKeys;
-(BOOL)_isCloudKitEnabled;
-(BOOL)_isMissingAndDownloadable;
-(BOOL)_updateWithDictionaryRepresentation:(id)arg0 ;
-(BOOL)isExpiredFromMMCS;
-(id)_auxVideoPathIfItExists;
-(id)_dictionaryRepresentation;
-(id)_dictionaryToSend;
-(id)_initWithGUID:(id)arg0 filename:(id)arg1 isDirectory:(BOOL)arg2 localURL:(id)arg3 account:(id)arg4 otherPerson:(id)arg5 totalBytes:(NSUInteger)arg6 hfsType:(unsigned int)arg7 hfsCreator:(unsigned int)arg8 hfsFlags:(unsigned short)arg9 isIncoming:(BOOL)arg10 ;
-(id)createAndPersistLivePhotoBundleIfNecessary;
-(id)description;
-(id)init;
-(void)_calculateTypeInformation;
-(void)_clear;
-(void)_resetTransferStateIfAttachmentIsMissingAndDownloadable;
-(void)_setAccount:(id)arg0 otherPerson:(id)arg1 ;
-(void)_setAveragedTransferRate:(NSUInteger)arg0 lastAveragedInterval:(CGFloat)arg1 lastAveragedBytes:(NSUInteger)arg2 ;
-(void)_setDirectory:(BOOL)arg0 hfsType:(unsigned int)arg1 hfsCreator:(unsigned int)arg2 hfsFlags:(unsigned short)arg3 ;
-(void)_updateWithDictionaryRepresentationForWhitelistedKeys:(id)arg0 ;
-(void)dealloc;


@end


#endif