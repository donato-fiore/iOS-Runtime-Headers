// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UPDIALOGACTOPTIONS_H
#define UPDIALOGACTOPTIONS_H

@class NSString, NSArray;
@protocol UPDialogAct;

#import <Foundation/Foundation.h>


@interface UPDialogActOptions : NSObject <UPDialogAct>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *entityName; // ivar: _entityName
@property (readonly, copy) NSString *entityType; // ivar: _entityType
@property (readonly, copy) NSArray *entityValues; // ivar: _entityValues
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *intent; // ivar: _intent
@property (readonly) Class superclass;


-(id)initWithIntent:(id)arg0 entityType:(id)arg1 entityName:(id)arg2 entityValues:(id)arg3 ;


@end


#endif