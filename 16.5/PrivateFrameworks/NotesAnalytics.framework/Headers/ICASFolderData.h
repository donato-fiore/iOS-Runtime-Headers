// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASFOLDERDATA_H
#define ICASFOLDERDATA_H

@class NSString, NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASCollaborationStatus.h"
#import "ICASCollaborationType.h"
#import "ICASFolderLabelType.h"
#import "ICASFolderType.h"

@interface ICASFolderData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASCollaborationStatus *collaborationStatus; // ivar: _collaborationStatus
@property (readonly, nonatomic) ICASCollaborationType *collaborationType; // ivar: _collaborationType
@property (readonly, nonatomic) NSString *folderID; // ivar: _folderID
@property (readonly, nonatomic) ICASFolderLabelType *folderLabelType; // ivar: _folderLabelType
@property (readonly, nonatomic) ICASFolderType *folderType; // ivar: _folderType
@property (readonly, nonatomic) NSNumber *subFolderLevel; // ivar: _subFolderLevel


+(id)dataName;
-(id)initWithFolderID:(id)arg0 folderType:(id)arg1 folderLabelType:(id)arg2 subFolderLevel:(id)arg3 collaborationStatus:(id)arg4 collaborationType:(id)arg5 ;
-(id)toDict;


@end


#endif