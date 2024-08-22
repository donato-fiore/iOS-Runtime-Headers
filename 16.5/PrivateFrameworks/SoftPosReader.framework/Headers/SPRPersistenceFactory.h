// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRPERSISTENCEFACTORY_H
#define SPRPERSISTENCEFACTORY_H



#import "SPRObject.h"

@interface SPRPersistenceFactory : SPRObject



-(id)makePersistingCoreDataWithEntity:(NSInteger)arg0 error:(*id)arg1 ;
-(id)makePersistingFileBasedWithName:(id)arg0 error:(*id)arg1 ;
-(id)makeStackableFileBasedWithName:(id)arg0 error:(*id)arg1 ;


@end


#endif