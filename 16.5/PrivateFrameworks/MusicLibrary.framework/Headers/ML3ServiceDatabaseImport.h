// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3SERVICEDATABASEIMPORT_H
#define ML3SERVICEDATABASEIMPORT_H



#import "ML3DatabaseImport.h"
#import "ML3Client.h"
#import "ML3MusicLibrary.h"
#import "ML3MediaLibraryWriter.h"

@interface ML3ServiceDatabaseImport : ML3DatabaseImport

@property (readonly, nonatomic) ML3Client *client; // ivar: _client
@property (readonly, nonatomic) ML3MusicLibrary *library; // ivar: _library
@property (readonly, nonatomic) ML3MediaLibraryWriter *writer; // ivar: _writer


-(id)initWithDatabaseImport:(id)arg0 library:(id)arg1 writer:(id)arg2 client:(id)arg3 ;


@end


#endif