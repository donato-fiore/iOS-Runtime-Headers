// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHACONTACTCLASSIFICATIONTASK_H
#define PHACONTACTCLASSIFICATIONTASK_H

@class NSString;
@protocol PHATask;

#import <Foundation/Foundation.h>


@interface PHAContactClassificationTask : NSObject <PHATask>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CGFloat period;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger version;


-(BOOL)classifyContactsWithPhotoLibrary:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(BOOL)currentPlatformIsSupported;
-(BOOL)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldProcessContact:(id)arg0 ;
-(BOOL)shouldRunWithGraphManager:(id)arg0 ;
-(id)_faceIDModelPersistentStorageDirectoryURLWithPhotoLibrary:(id)arg0 ;
-(id)_loadPersonsModelWithPhotoLibrary:(id)arg0 ;
-(id)sortedPoolOfContactIdentifiersExcludingContactIdentifiers:(id)arg0 progress:(id)arg1 ;


@end


#endif