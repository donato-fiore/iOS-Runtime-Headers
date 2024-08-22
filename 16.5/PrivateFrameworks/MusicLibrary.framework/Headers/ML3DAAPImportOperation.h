// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
    NSInteger _totalAlbumCount;
    NSInteger _totalArtistCount;
    NSInteger _processedTrackCount;
    NSInteger _processedContainerCount;
    BOOL _importSessionStarted;
    int _sourceType;
}




-(?)importItemFromDAAPElement;
-(?)personImportItemFromDAAPElement;
-(BOOL)_importDAAPPayloadFromFile:(id)arg0 entityType:(int)arg1 ;
-(BOOL)_importDAAPPayloadFromFile:(id)arg0 shouldProcessPlaylists:(BOOL)arg1 ;
-(BOOL)_processAlbumCount:(int)arg0 ;
-(BOOL)_processAlbumElement:(struct shared_ptr<ML3CPP::Element> )arg0 ;
-(BOOL)_processArtistCount:(int)arg0 ;
-(BOOL)_processArtistElement:(struct shared_ptr<ML3CPP::Element> )arg0 ;
-(BOOL)_processContainerElement:(struct shared_ptr<ML3CPP::Element> )arg0 withTrackIds:(struct vector<long long, std::allocator<long long>> )arg1 trackPersonIdentifiers:(struct vector<std::unordered_set<std::string>, std::allocator<std::unordered_set<std::string>>> )arg2 ;
-(BOOL)_processContainerItemCount:(int)arg0 ;
-(BOOL)_processDeletedAlbumId:(NSInteger)arg0 ;
-(BOOL)_processDeletedArtistId:(NSInteger)arg0 ;
-(BOOL)_processDeletedContainerId:(NSInteger)arg0 ;
-(BOOL)_processDeletedTrackId:(NSInteger)arg0 ;
-(BOOL)_processPersonElement:(struct shared_ptr<ML3CPP::Element> )arg0 ;
-(BOOL)_processTrackElement:(struct shared_ptr<ML3CPP::Element> )arg0 ;
-(BOOL)_processTrackItemCount:(int)arg0 ;
-(BOOL)_processUpdateType:(unsigned char)arg0 ;
-(BOOL)_startImportSessionIfNeeded;
-(BOOL)performImportOfSourceType:(int)arg0 usingConnection:(id)arg1 ;
-(struct shared_ptr<ML3DAAPImportItem> )containerImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> )arg0 withTrackIds:(struct vector<long long, std::allocator<long long>> )arg1 trackPersonIdentifiers:(struct vector<std::unordered_set<std::string>, std::allocator<std::unordered_set<std::string>>> )arg2 ;
-(void)_finishParsingWithError:(id)arg0 ;
-(void)dealloc;
-(void)updateImportProgress:(float)arg0 ;


@end


#endif