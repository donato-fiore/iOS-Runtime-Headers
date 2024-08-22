// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3DAAPIMPORTOPERATION_H
#define ML3DAAPIMPORTOPERATION_H

@class NSError;


#import "ML3ImportOperation.h"

@interface ML3DAAPImportOperation : ML3ImportOperation {
    *void _importSession;
    NSError *_importError;
    shared_ptr<DAAPParserDelegate> _delegate;
    unsigned char _updateType;
    NSInteger _totalTrackCount;
    NSInteger _totalContainerCount;
    NSInteger _processedTrackCount;
    NSInteger _processedContainerCount;
    BOOL _importSessionStarted;
    int _sourceType;
}




-(?)_processContainerElement:(?)arg0 withTrackIdstrackPersonIdentifiers;
-(?)_processPersonElement;
-(?)_processTrackElement;
-(?)containerImportItemFromDAAPElement:(?)arg0 withTrackIdstrackPersonIdentifiers;
-(BOOL)_importDAAPPayloadFromFile:(id)arg0 shouldProcessPlaylists:(BOOL)arg1 ;
-(BOOL)_processContainerItemCount:(int)arg0 ;
-(BOOL)_processDeletedContainerId:(NSInteger)arg0 ;
-(BOOL)_processDeletedTrackId:(NSInteger)arg0 ;
-(BOOL)_processTrackItemCount:(int)arg0 ;
-(BOOL)_processUpdateType:(unsigned char)arg0 ;
-(BOOL)_startImportSessionIfNeeded;
-(BOOL)performImportOfSourceType:(int)arg0 usingConnection:(id)arg1 ;
-(struct shared_ptr<ML3DAAPImportItem> )importItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> )arg0 ;
-(struct shared_ptr<ML3DAAPImportItem> )personImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> )arg0 ;
-(void)_finishParsingWithError:(id)arg0 ;
-(void)dealloc;
-(void)updateImportProgress:(float)arg0 ;


@end


#endif