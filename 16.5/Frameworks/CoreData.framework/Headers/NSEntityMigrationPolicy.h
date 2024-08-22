// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSENTITYMIGRATIONPOLICY_H
#define NSENTITYMIGRATIONPOLICY_H


#import <Foundation/Foundation.h>


@interface NSEntityMigrationPolicy : NSObject



-(BOOL)beginEntityMapping:(id)arg0 manager:(id)arg1 error:(*id)arg2 ;
-(BOOL)createDestinationInstancesForSourceInstance:(id)arg0 entityMapping:(id)arg1 manager:(id)arg2 error:(*id)arg3 ;
-(BOOL)createRelationshipsForDestinationInstance:(id)arg0 entityMapping:(id)arg1 manager:(id)arg2 error:(*id)arg3 ;
-(BOOL)endEntityMapping:(id)arg0 manager:(id)arg1 error:(*id)arg2 ;
-(BOOL)endInstanceCreationForEntityMapping:(id)arg0 manager:(id)arg1 error:(*id)arg2 ;
-(BOOL)endRelationshipCreationForEntityMapping:(id)arg0 manager:(id)arg1 error:(*id)arg2 ;
-(BOOL)performCustomValidationForEntityMapping:(id)arg0 manager:(id)arg1 error:(*id)arg2 ;
-(id)_nonNilValueOrDefaultValueForAttribute:(id)arg0 source:(id)arg1 destination:(id)arg2 ;


@end


#endif