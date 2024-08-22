// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNUIDEFAULTUSERACTIONRECORDEREVENTFACTORY_H
#define _CNUIDEFAULTUSERACTIONRECORDEREVENTFACTORY_H

@class NSString;
@protocol CNUIDefaultUserActionRecorderEventFactory;

#import <Foundation/Foundation.h>


@interface _CNUIDefaultUserActionRecorderEventFactory : NSObject <CNUIDefaultUserActionRecorderEventFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)recentEventForAddress:(id)arg0 kind:(id)arg1 metadata:(id)arg2 ;


@end


#endif