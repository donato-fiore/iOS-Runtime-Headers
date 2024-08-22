// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSCKCONFIGSTORE_H
#define DRSCKCONFIGSTORE_H

@class NSPersistentContainer, NSManagedObjectContext, NSString;

#import <Foundation/Foundation.h>


@interface DRSCKConfigStore : NSObject

@property (readonly, nonatomic) NSPersistentContainer *container; // ivar: _container
@property (readonly, nonatomic) NSManagedObjectContext *context; // ivar: _context
@property (readonly, nonatomic) BOOL isReadOnly; // ivar: _isReadOnly
@property (readonly, nonatomic) NSString *workingDirectory; // ivar: _workingDirectory


-(BOOL)resetToDefaultWithErrorOut:(*id)arg0 ;
-(BOOL)saveConfig:(id)arg0 errorOut:(*id)arg1 ;
-(id)_currentConfig_ON_MOC_QUEUE:(*id)arg0 ;
-(id)currentConfig:(*id)arg0 ;
-(id)initWithWorkingDirectory:(id)arg0 isReadOnly:(BOOL)arg1 errorOut:(*id)arg2 ;


@end


#endif