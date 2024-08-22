// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NOTECHANGEOBJECT_H
#define NOTECHANGEOBJECT_H

@class NSManagedObject, NSNumber, NSMutableSet;


#import "NoteStoreObject.h"

@interface NoteChangeObject : NSManagedObject

@property (retain, nonatomic) NSNumber *changeType;
@property (retain, nonatomic) NSMutableSet *noteIntegerIds;
@property (retain, nonatomic) NSMutableSet *noteServerIds;
@property (retain, nonatomic) NSMutableSet *noteServerIntIds;
@property (retain, nonatomic) NoteStoreObject *store;




@end


#endif