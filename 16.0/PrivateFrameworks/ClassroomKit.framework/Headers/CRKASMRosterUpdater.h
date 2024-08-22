// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKASMROSTERUPDATER_H
#define CRKASMROSTERUPDATER_H

@protocol CRKClassKitRosterRequirements;

#import <Foundation/Foundation.h>


@interface CRKASMRosterUpdater : NSObject

@property (readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *requirements; // ivar: _requirements


-(id)courseWithIdentifier:(id)arg0 inRoster:(id)arg1 ;
-(id)errorWrappingCompletionForCompletion:(SEL)arg0 selectorName:(id)arg1 ;
-(id)initWithRequirements:(id)arg0 ;
-(id)objectIDForCourseWithIdentifier:(id)arg0 inRoster:(id)arg1 error:(*id)arg2 ;
-(void)createClassOperationDidFinish:(id)arg0 completion:(id)arg1 ;
-(void)createClassWithProperties:(id)arg0 completion:(id)arg1 ;
-(void)removeCourseWithIdentifier:(id)arg0 roster:(id)arg1 completion:(id)arg2 ;
-(void)removeOperationDidFinish:(id)arg0 completion:(id)arg1 ;
-(void)updateClassOperationDidFinish:(id)arg0 completion:(id)arg1 ;
-(void)updateCourseWithIdentifier:(id)arg0 properties:(id)arg1 roster:(id)arg2 completion:(id)arg3 ;


@end


#endif