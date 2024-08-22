// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2CANCELABLEOBJECT_H
#define HAP2CANCELABLEOBJECT_H

@class NSError, NSString;
@protocol HAP2Cancelable;


#import "HAP2LoggingObject.h"
#import "HAP2PropertyLock.h"

@interface HAP2CancelableObject : HAP2LoggingObject <HAP2Cancelable>



@property (retain, nonatomic) NSError *cancelError; // ivar: _cancelError
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HAP2PropertyLock *propertyLock; // ivar: _propertyLock
@property (readonly) Class superclass;


-(id)init;
-(void)cancelWithError:(id)arg0 ;


@end


#endif