// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKRECORDGRAPHNODE_H
#define CKRECORDGRAPHNODE_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "CKRecord.h"

@interface CKRecordGraphNode : NSObject

@property (retain, nonatomic) NSMutableSet *edges; // ivar: _edges
@property (readonly, nonatomic) NSUInteger indegree;
@property (readonly, nonatomic) NSMutableSet *indegrees; // ivar: _indegrees
@property (retain, nonatomic) CKRecord *record; // ivar: _record


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CKPropertiesDescription;
-(id)description;
-(id)init;


@end


#endif