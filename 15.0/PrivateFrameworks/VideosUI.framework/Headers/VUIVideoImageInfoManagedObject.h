// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIVIDEOIMAGEINFOMANAGEDOBJECT_H
#define VUIVIDEOIMAGEINFOMANAGEDOBJECT_H



#import "VUIImageInfoManagedObject.h"
#import "VUIVideoManagedObject.h"

@interface VUIVideoImageInfoManagedObject : VUIImageInfoManagedObject

@property (retain, nonatomic) VUIVideoManagedObject *video;


+(id)fetchRequest;


@end


#endif