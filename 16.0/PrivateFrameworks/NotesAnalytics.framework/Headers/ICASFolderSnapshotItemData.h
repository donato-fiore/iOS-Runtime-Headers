// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASFOLDERSNAPSHOTITEMDATA_H
#define ICASFOLDERSNAPSHOTITEMDATA_H

@class NSNumber, NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASCollaborationStatus.h"
#import "ICASCollaborationType.h"
#import "ICASFolderLabelType.h"
#import "ICASFolderType.h"

@interface ICASFolderSnapshotItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASCollaborationStatus *collaborationStatus; // ivar: _collaborationStatus
@property (readonly, nonatomic) ICASCollaborationType *collaborationType; // ivar: _collaborationType
@property (readonly, nonatomic) NSNumber *countOfAcceptances; // ivar: _countOfAcceptances
@property (readonly, nonatomic) NSNumber *countOfInvitees; // ivar: _countOfInvitees
@property (readonly, nonatomic) NSNumber *directNoteCount; // ivar: _directNoteCount
@property (readonly, nonatomic) NSString *folderID; // ivar: _folderID
@property (readonly, nonatomic) ICASFolderLabelType *folderLabelType; // ivar: _folderLabelType
@property (readonly, nonatomic) ICASFolderType *folderType; // ivar: _folderType
@property (readonly, nonatomic) NSNumber *totalNoteCount; // ivar: _totalNoteCount


+(id)dataName;
-(id)initWithFolderID:(id)arg0 collaborationStatus:(id)arg1 collaborationType:(id)arg2 countOfInvitees:(id)arg3 countOfAcceptances:(id)arg4 directNoteCount:(id)arg5 totalNoteCount:(id)arg6 folderType:(id)arg7 folderLabelType:(id)arg8 ;
-(id)toDict;


@end


#endif