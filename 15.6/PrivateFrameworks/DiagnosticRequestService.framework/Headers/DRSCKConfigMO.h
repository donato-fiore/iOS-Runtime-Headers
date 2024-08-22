// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSCKCONFIGMO_H
#define DRSCKCONFIGMO_H

@class NSManagedObject;



@interface DRSCKConfigMO : NSManagedObject

@property (nonatomic) short containerEnvironment;
@property (nonatomic) short rapidEnvironment;


+(id)fetchRequest;


@end


#endif