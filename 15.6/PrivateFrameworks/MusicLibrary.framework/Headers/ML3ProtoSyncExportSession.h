// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3PROTOSYNCEXPORTSESSION_H
#define ML3PROTOSYNCEXPORTSESSION_H

@class NSString, MSVStreamWriter;


#import "ML3ExportSession.h"

@interface ML3ProtoSyncExportSession : ML3ExportSession {
    NSString *_libraryUUID;
    int _syncType;
    MSVStreamWriter *_streamWriter;
    ? _stats;
    CGFloat _sessionStartTime;
}




-(id)_writSyncPackageToStream:(id)arg0 ;
-(id)begin:(unsigned int)arg0 ;
-(id)end;
-(id)exportPlaylistAdded:(NSUInteger)arg0 ;
-(id)exportPlaylistDeleted:(NSUInteger)arg0 ;
-(id)exportTrackAdded:(NSUInteger)arg0 ;
-(id)exportTrackDeleted:(NSUInteger)arg0 ;
-(id)exportTrackUpdated:(NSUInteger)arg0 ;
-(id)initWithLibrary:(id)arg0 outputStream:(id)arg1 syncType:(int)arg2 ;


@end


#endif