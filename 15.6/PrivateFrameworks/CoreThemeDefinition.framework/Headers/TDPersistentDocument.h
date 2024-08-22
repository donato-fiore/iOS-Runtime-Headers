// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDPERSISTENTDOCUMENT_H
#define TDPERSISTENTDOCUMENT_H

@class NSManagedObjectModel, NSManagedObjectContext, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface TDPersistentDocument : NSObject {
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
}


@property (copy, nonatomic) NSString *fileType; // ivar: _fileType
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (copy, nonatomic) NSURL *temporaryFileURL; // ivar: _temporaryFileURL


+(id)_fileModificationDateForURL:(id)arg0 ;
-(BOOL)configurePersistentStoreCoordinatorForURL:(id)arg0 ofType:(id)arg1 modelConfiguration:(id)arg2 storeOptions:(id)arg3 error:(*id)arg4 ;
-(BOOL)readFromURL:(id)arg0 ofType:(id)arg1 error:(*id)arg2 ;
-(id)_persistentStoreCoordinator;
-(id)displayName;
-(id)initWithContentsOfURL:(id)arg0 ofType:(id)arg1 error:(*id)arg2 ;
-(id)initWithType:(id)arg0 error:(*id)arg1 ;
-(id)managedObjectContext;
-(id)managedObjectModel;
-(id)persistentStoreTypeForFileType:(id)arg0 ;
-(id)undoManager;
-(void)close;
-(void)dealloc;
-(void)saveDocument:(id)arg0 ;
-(void)setManagedObjectContext:(id)arg0 ;


@end


#endif