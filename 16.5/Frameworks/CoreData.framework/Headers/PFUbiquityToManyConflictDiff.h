// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFUBIQUITYTOMANYCONFLICTDIFF_H
#define PFUBIQUITYTOMANYCONFLICTDIFF_H

@class NSMutableSet, NSString;

#import <Foundation/Foundation.h>


@interface PFUbiquityToManyConflictDiff : NSObject {
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSString *_relationshipKey;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initForRelationshipAtKey:(id)arg0 ;
-(void)dealloc;


@end


#endif