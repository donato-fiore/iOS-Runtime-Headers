// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDAPPLICATIONMO_H
#define DNDAPPLICATIONMO_H

@class NSManagedObject, NSString, NSSet;



@interface DNDApplicationMO : NSManagedObject

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSSet *settings;
@property (copy, nonatomic) NSString *teamIdentifier;


+(id)fetchRequest;


@end


#endif