// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12FEEDBACKCORE23FBKMANAGEDOBJECTCHANGES_H
#define _TTC12FEEDBACKCORE23FBKMANAGEDOBJECTCHANGES_H

@class NSSet, NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface _TtC12FeedbackCore23FBKManagedObjectChanges : NSObject {
    ? notification;
}


@property (nonatomic, readonly) NSSet *deletedObjects;
@property (nonatomic, readonly) NSSet *insertedObjects;
@property (nonatomic, readonly) BOOL invalidatedAllObjects;
@property (nonatomic, readonly) NSSet *invalidatedObjects;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSSet *refreshedObjects;
@property (nonatomic, readonly) NSSet *updatedObjects;


-(id)init;


@end


#endif