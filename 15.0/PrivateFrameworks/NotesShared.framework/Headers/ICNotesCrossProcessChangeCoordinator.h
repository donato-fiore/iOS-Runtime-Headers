// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICNOTESCROSSPROCESSCHANGECOORDINATOR_H
#define ICNOTESCROSSPROCESSCHANGECOORDINATOR_H

@class NSManagedObjectContext, NSPersistentStoreCoordinator;

#import <Foundation/Foundation.h>


@interface ICNotesCrossProcessChangeCoordinator : NSObject

@property (retain, nonatomic) NSManagedObjectContext *destinationContext; // ivar: _destinationContext
@property (retain, nonatomic) NSPersistentStoreCoordinator *sourceCoordinator; // ivar: _sourceCoordinator


-(id)initWithSourceCoordinator:(id)arg0 destinationContext:(id)arg1 ;
-(void)dealloc;
-(void)postAccountDidChangeNotification;
-(void)postCrossProcessNotificationName:(id)arg0 ;
-(void)postNotesPasswordStatusDidChangeNotification;
-(void)registerForAccountNotifications;
-(void)registerForCrossProcessNotificationName:(id)arg0 block:(id)arg1 ;
-(void)registerForPasswordStatusDidChangeNotifications;


@end


#endif