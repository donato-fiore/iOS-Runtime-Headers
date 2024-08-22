// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APODMLCOREDATASTORAGE_H
#define APODMLCOREDATASTORAGE_H

@class NSError, NSPersistentContainer;

#import <Foundation/Foundation.h>


@interface APOdmlCoreDataStorage : NSObject

@property (retain, nonatomic) NSError *coreDataError; // ivar: _coreDataError
@property (nonatomic) BOOL coreDataIsInitialized; // ivar: _coreDataIsInitialized
@property (retain, nonatomic) NSPersistentContainer *persistentContainer; // ivar: _persistentContainer


-(id)init;
-(void)createContainer;
-(void)initializeCoreDataStackForClient;
-(void)initializeCoreDataStackForDaemon;
-(void)launchContainer;
-(void)makeApplicationSupportDirectory;
-(void)setContainerDescriptionClient;
-(void)setContainerDescriptionDaemon:(id)arg0 ;


@end


#endif