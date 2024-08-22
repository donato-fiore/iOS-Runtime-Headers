// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCOURSELIBRARY_H
#define CKCOURSELIBRARY_H

@class NSManagedObjectContext;

#import <Foundation/Foundation.h>

#import "CKSharedDatabase.h"

@interface CKCourseLibrary : NSObject

@property (retain, nonatomic) NSManagedObjectContext *moc; // ivar: _moc
@property (retain, nonatomic) CKSharedDatabase *sharedDatabase; // ivar: _sharedDatabase


+(BOOL)isCourseLibraryAvailable;
+(BOOL)openCourse:(id)arg0 ;
+(id)sharedCourseLibrary;
+(id)sharedDocumentsDirectory;
-(id)allCourses;
-(id)courseLibrayVersion;
-(id)courseWithCourseID:(id)arg0 ;
-(id)init;


@end


#endif