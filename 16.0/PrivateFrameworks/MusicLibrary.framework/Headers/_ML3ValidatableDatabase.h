// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ML3VALIDATABLEDATABASE_H
#define _ML3VALIDATABLEDATABASE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _ML3ValidatableDatabase : NSObject {
    NSUInteger _queueID;
}


@property (copy, nonatomic) NSString *databasePath; // ivar: _databasePath
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *validationSerialQueue; // ivar: _validationSerialQueue
@property (nonatomic) NSUInteger validationState; // ivar: _validationState


-(BOOL)currentQueueIsValidationQueue;
-(id)init;
-(id)initWithDatabasePath:(id)arg0 ;


@end


#endif