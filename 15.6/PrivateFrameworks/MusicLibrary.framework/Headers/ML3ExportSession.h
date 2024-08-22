// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3EXPORTSESSION_H
#define ML3EXPORTSESSION_H

@class NSData, NSOutputStream;


#import "ML3MusicLibrary.h"

@interface ML3ExportSession : NSData

@property (readonly, nonatomic) ML3MusicLibrary *library; // ivar: _library
@property (readonly, nonatomic) NSOutputStream *outputStream; // ivar: _outputStream


-(id)begin:(unsigned int)arg0 ;
-(id)end;
-(id)exportPlaylistAdded:(NSUInteger)arg0 ;
-(id)exportPlaylistDeleted:(NSUInteger)arg0 ;
-(id)exportTrackAdded:(NSUInteger)arg0 ;
-(id)exportTrackDeleted:(NSUInteger)arg0 ;
-(id)exportTrackUpdated:(NSUInteger)arg0 ;
-(id)initWithLibrary:(id)arg0 outputStream:(id)arg1 ;


@end


#endif