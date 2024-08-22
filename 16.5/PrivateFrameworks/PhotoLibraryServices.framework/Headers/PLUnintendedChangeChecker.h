// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUNINTENDEDCHANGECHECKER_H
#define PLUNINTENDEDCHANGECHECKER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PLUnintendedChangeChecker : NSObject {
    NSArray *_unexpectedMomentAssetKeys;
    NSArray *_unexpectedMomentAdditionalAssetAttributeKeys;
    NSArray *_unexpectedCPLAssetKeys;
}




+(BOOL)shouldCheckForUnintendedChanges;
+(void)checkForUnintendedChangeOnMergeConflicts:(id)arg0 withBlock:(id)arg1 ;
+(void)checkForUnintendedChangesDuringeSave:(id)arg0 withBlock:(id)arg1 ;
-(id)init;
-(void)_checkForUnintendedCPLChangesOnObject:(id)arg0 withBlock:(id)arg1 ;
-(void)_checkForUnintendedChangesOnObject:(id)arg0 withBlock:(id)arg1 ;
-(void)_checkForUnintendedChangesOnObject:(id)arg0 withEntity:(id)arg1 unexpectedKeys:(id)arg2 block:(id)arg3 ;
-(void)_checkForUnintendedMomentChangesOnObject:(id)arg0 withBlock:(id)arg1 ;
-(void)checkForUnintendedChangeOnMergeConflicts:(id)arg0 withBlock:(id)arg1 ;
-(void)checkForUnintendedChangesDuringeSave:(id)arg0 withBlock:(id)arg1 ;


@end


#endif