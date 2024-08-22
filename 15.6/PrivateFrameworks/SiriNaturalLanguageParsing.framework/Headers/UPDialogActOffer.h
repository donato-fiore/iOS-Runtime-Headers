// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UPDIALOGACTOFFER_H
#define UPDIALOGACTOFFER_H

@class NSString;
@protocol UPDialogAct;

#import <Foundation/Foundation.h>

#import "UPEntityWithValue.h"

@interface UPDialogActOffer : NSObject <UPDialogAct>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) UPEntityWithValue *entityWithValue; // ivar: _entityWithValue
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *intent; // ivar: _intent
@property (readonly) Class superclass;


-(id)initWithIntent:(id)arg0 ;
-(id)initWithIntent:(id)arg0 entityWithValue:(id)arg1 ;


@end


#endif