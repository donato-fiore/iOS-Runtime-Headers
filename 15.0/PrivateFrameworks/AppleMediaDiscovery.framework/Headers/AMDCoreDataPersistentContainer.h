// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDCOREDATAPERSISTENTCONTAINER_H
#define AMDCOREDATAPERSISTENTCONTAINER_H

@class NSPersistentContainer, NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface AMDCoreDataPersistentContainer : NSObject

@property (retain, nonatomic) NSPersistentContainer *_container; // ivar: __container
@property (retain, nonatomic) NSManagedObjectContext *_moc; // ivar: __moc


+(id)sharedContainer;
-(id)getManagedObjectContext;
-(void)save:(*id)arg0 ;


@end


#endif