// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMEVENTBASE_H
#define BMEVENTBASE_H

@class NSArray, NSString;
@protocol BMStreamValidating;

#import <Foundation/Foundation.h>


@interface BMEventBase : NSObject <BMStreamValidating>



@property (copy, nonatomic) NSArray *_validators; // ivar: __validators
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isCompleteWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)isValidWithContext:(id)arg0 error:(*id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)valueForKeyPath:(id)arg0 ;


@end


#endif