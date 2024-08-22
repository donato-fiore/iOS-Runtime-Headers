// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLMANAGEDOBJECTVALIDATIONRESULT_H
#define PLMANAGEDOBJECTVALIDATIONRESULT_H

@class NSArray, NSManagedObject<PLValidatedManagedObject>;

#import <Foundation/Foundation.h>


@interface PLManagedObjectValidationResult : NSObject

@property (retain, nonatomic) NSArray *errorMessages; // ivar: _errorMessages
@property (retain, nonatomic) NSArray *infoMessages; // ivar: _infoMessages
@property (nonatomic) BOOL status; // ivar: _status
@property (retain, nonatomic) NSManagedObject<PLValidatedManagedObject> *validatedObject; // ivar: _validatedObject




@end


#endif