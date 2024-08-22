// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCSAVEDRECORDINGSMODELCHANGECONTEXT_H
#define RCSAVEDRECORDINGSMODELCHANGECONTEXT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface RCSavedRecordingsModelChangeContext : NSObject

@property (readonly, copy, nonatomic) NSArray *deletedObjects; // ivar: _deletedObjects
@property (readonly, copy, nonatomic) NSArray *insertedObjects; // ivar: _insertedObjects
@property (readonly, copy, nonatomic) NSArray *updatedObjects; // ivar: _updatedObjects


-(id)_recordingURIsInArray:(id)arg0 includeTemporaryURIs:(BOOL)arg1 ;
-(id)deletedRecordingURIsIncludingTemporaryURIs:(BOOL)arg0 ;
-(id)initWithStateFromManagedObjectContext:(id)arg0 ;
-(id)insertedRecordingURIsIncludingTemporaryURIs:(BOOL)arg0 ;
-(id)updatedRecordingURIsIncludingTemporaryURIs:(BOOL)arg0 ;


@end


#endif