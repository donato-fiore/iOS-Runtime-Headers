// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASFOLDERITEMSSYNCTASK_H
#define ASFOLDERITEMSSYNCTASK_H

@class NSArray, NSString, NSMutableSet, NSSet;
@protocol NSCopying;


#import "ASTask.h"
#import "ASMailMessage.h"

@interface ASFolderItemsSyncTask : ASTask <NSCopying>



@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (nonatomic) int bodyTruncationBytes; // ivar: _bodyTruncationBytes
@property (nonatomic) BOOL clientWinsOnSyncConflict; // ivar: _clientWinsOnSyncConflict
@property (nonatomic) NSInteger dataclass; // ivar: _dataclass
@property (nonatomic) BOOL deletesAsMoves; // ivar: _deletesAsMoves
@property (nonatomic) int filterDays; // ivar: _filterDays
@property (copy, nonatomic) NSString *folderID; // ivar: _folderID
@property (nonatomic) BOOL hadFalseMoreAvailable; // ivar: _hadFalseMoreAvailable
@property (nonatomic) BOOL haveShortcut121Response; // ivar: _haveShortcut121Response
@property (nonatomic) BOOL isInitialBootstrapSync; // ivar: _isInitialBootstrapSync
@property (nonatomic) BOOL isInitialSync; // ivar: _isInitialSync
@property (nonatomic) BOOL isResyncAfterConnectionFailed; // ivar: _isResyncAfterConnectionFailed
@property (nonatomic) BOOL isSpinning; // ivar: _isSpinning
@property (retain, nonatomic) NSMutableSet *mRejectedServerIds; // ivar: _mRejectedServerIds
@property (nonatomic, setter=setMIMESupport:) int mimeSupport; // ivar: _mimeSupport
@property (nonatomic) BOOL moreAvailable; // ivar: _moreAvailable
@property (nonatomic) BOOL moreLocalChangesAvailable; // ivar: _moreLocalChangesAvailable
@property (nonatomic) int numDownloadedElements; // ivar: _numDownloadedElements
@property (nonatomic) int numReplacedItems; // ivar: _numReplacedItems
@property (retain, nonatomic) NSArray *preservedActions; // ivar: _preservedActions
@property (copy, nonatomic) NSString *previousSyncKey; // ivar: _previousSyncKey
@property (readonly, nonatomic) NSString *previousSyncKeyForAgent;
@property (retain, nonatomic) NSArray *pushedActions; // ivar: _pushedActions
@property (readonly, nonatomic) NSSet *rejectedServerIds;
@property (retain, nonatomic) ASMailMessage *streamingMailMessage; // ivar: _streamingMailMessage
@property (nonatomic) BOOL willUpdate; // ivar: _willUpdate


-(BOOL)checkForErrorInContext:(id)arg0 ;
-(BOOL)getTopLevelToken:(char *)arg0 outStatusCodePage:(char *)arg1 outStatusToken:(char *)arg2 ;
-(BOOL)handleStreamOperation:(int)arg0 forCodePage:(int)arg1 tag:(int)arg2 withParentItem:(id)arg3 withData:(char *)arg4 dataLength:(int)arg5 ;
-(BOOL)processContext:(id)arg0 ;
-(CGFloat)percentComplete;
-(NSInteger)taskStatusForExchangeStatus:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFolderID:(id)arg0 ;
-(id)initWithFolderID:(id)arg0 deletesAsMoves:(BOOL)arg1 ;
-(id)replacementObjectForEmailItem:(id)arg0 ;
-(id)requestBody;
-(int)_bodyTruncationCode;
-(int)_mimeTruncationCode;
-(int)bodyType;
-(int)commandCode;
-(void)_addRejectedServerId:(id)arg0 ;
-(void)_handleChangedLeaf:(id)arg0 addedChanges:(id)arg1 modifiedChanges:(id)arg2 removedChanges:(id)arg3 ;
-(void)_handleResponseToLeaf:(id)arg0 addedResponses:(id)arg1 modifiedResponses:(id)arg2 removedResponses:(id)arg3 fetchedResponses:(id)arg4 ;
-(void)_setSpinning:(BOOL)arg0 ;
-(void)appendActionData:(id)arg0 ;
-(void)appendSupportedFieldsData:(id)arg0 ;
-(void)dealloc;
-(void)finishWithError:(id)arg0 ;
-(void)reportStatusWithError:(id)arg0 ;


@end


#endif