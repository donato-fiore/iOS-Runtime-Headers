// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDISCONNECTEDMANAGEDOBJECTCONTEXT_H
#define PLDISCONNECTEDMANAGEDOBJECTCONTEXT_H



#import "PLManagedObjectContext.h"

@interface PLDisconnectedManagedObjectContext : PLManagedObjectContext



+(BOOL)canMergeRemoteChanges;
+(BOOL)shouldHavePhotoLibrary;
-(BOOL)isDatabaseCreationContext;
-(void)performBlock:(id)arg0 ;
-(void)performBlockAndWait:(id)arg0 ;
-(void)setPhotoLibrary:(id)arg0 ;


@end


#endif