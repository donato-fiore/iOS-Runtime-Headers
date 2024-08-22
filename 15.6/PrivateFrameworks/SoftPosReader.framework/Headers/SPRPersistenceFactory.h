// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPRPERSISTENCEFACTORY_H
#define SPRPERSISTENCEFACTORY_H


#import <Foundation/Foundation.h>


@interface SPRPersistenceFactory : NSObject {
    ? _storagePath;
}




-(id)init;
-(id)initWithStoragePath:(id)arg0 error:(*id)arg1 ;
-(id)makePersistenceCoreDataWithName:(id)arg0 error:(*id)arg1 ;
-(id)makePersistenceFileBasedWithName:(id)arg0 error:(*id)arg1 ;
-(id)makePersistingCoreDataWithEntity:(NSInteger)arg0 error:(*id)arg1 ;
-(id)makePersistingFileBasedWithName:(id)arg0 error:(*id)arg1 ;
-(id)makeStackableFileBasedWithName:(id)arg0 error:(*id)arg1 ;


@end


#endif