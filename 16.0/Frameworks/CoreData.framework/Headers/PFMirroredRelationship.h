// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFMIRROREDRELATIONSHIP_H
#define PFMIRROREDRELATIONSHIP_H


#import <Foundation/Foundation.h>


@interface PFMirroredRelationship : NSObject



+(BOOL)isValidMirroredRelationshipRecord:(id)arg0 values:(id)arg1 ;
-(BOOL)updateRelationshipValueUsingImportContext:(id)arg0 andManagedObjectContext:(id)arg1 error:(*id)arg2 ;


@end


#endif