// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCDOWNLOADCONTENT_H
#define BRCDOWNLOADCONTENT_H

@class NSIndexSet;


#import "BRCDownload.h"
#import "BRCServerZone.h"
#import "BRCProgress.h"

@interface BRCDownloadContent : BRCDownload {
    BRCServerZone *_zone;
    BOOL _isFinderBookmark;
}


@property (readonly, nonatomic) NSIndexSet *desiredIndices; // ivar: _desiredIndices
@property (readonly, nonatomic) unsigned int liveDocumentID; // ivar: _liveDocumentID
@property (readonly, nonatomic) NSUInteger liveFileID; // ivar: _liveFileID
@property (readonly, nonatomic) BOOL liveItemIsPackage; // ivar: _liveItemIsPackage
@property (retain, nonatomic) BRCProgress *progress;
@property (readonly, nonatomic) BOOL requiresTwoPhase; // ivar: _requiresTwoPhase


-(BOOL)_prepareSecondStageWithSession:(id)arg0 manifest:(id)arg1 package:(id)arg2 error:(*id)arg3 ;
-(BOOL)_stageWithSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)_stageWithSession:(id)arg0 manifest:(id)arg1 package:(id)arg2 xattrsPackage:(id)arg3 error:(*id)arg4 ;
-(id)description;
-(id)initWithDocument:(id)arg0 stageID:(id)arg1 ;
-(int)kind;


@end


#endif