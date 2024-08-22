// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMEVENTAPPASSOCIATINGIMPLEMENTOR_H
#define BMEVENTAPPASSOCIATINGIMPLEMENTOR_H

@class NSString;
@protocol BMEventAppAssociating;


#import "BMEventBase.h"

@interface BMEventAppAssociatingImplementor : BMEventBase <BMEventAppAssociating>



@property (copy, nonatomic) NSString *bundleID; // ivar: bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isCompleteWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)isValidWithContext:(id)arg0 error:(*id)arg1 ;


@end


#endif