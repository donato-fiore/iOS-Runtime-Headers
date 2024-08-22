// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3CLIENTIMPORTSERVICESESSION_H
#define ML3CLIENTIMPORTSERVICESESSION_H


#import <Foundation/Foundation.h>

#import "ML3DatabaseConnection.h"
#import "ML3MusicLibrary.h"
#import "ML3ClientImportSessionConfiguration.h"

@interface ML3ClientImportServiceSession : NSObject {
    *void _importSession;
    ML3DatabaseConnection *_databaseConnection;
    ML3MusicLibrary *_library;
    ML3ClientImportSessionConfiguration *_configuration;
}




-(BOOL)addTrack:(id)arg0 persistentID:(*id)arg1 ;
-(BOOL)begin;
-(BOOL)finish;
-(BOOL)removeTrack:(id)arg0 persistentID:(*id)arg1 ;
-(BOOL)updateTrack:(id)arg0 persistentID:(*id)arg1 ;
-(id)initWithLibrary:(id)arg0 connection:(id)arg1 configuration:(id)arg2 ;
-(void)dealloc;


@end


#endif