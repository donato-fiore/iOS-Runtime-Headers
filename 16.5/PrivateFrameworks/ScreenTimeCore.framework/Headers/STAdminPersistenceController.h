// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STADMINPERSISTENCECONTROLLER_H
#define STADMINPERSISTENCECONTROLLER_H



#import "STPersistenceController.h"

@interface STAdminPersistenceController : STPersistenceController



+(id)sharedController;
-(id)init;
-(id)newBackgroundContext;


@end


#endif