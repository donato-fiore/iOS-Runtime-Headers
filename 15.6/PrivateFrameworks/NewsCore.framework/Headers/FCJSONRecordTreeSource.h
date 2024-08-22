// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCJSONRECORDTREESOURCE_H
#define FCJSONRECORDTREESOURCE_H

@class NSArray;
@protocol FCJSONRecordTreeSourceType, FCContentContext;

#import <Foundation/Foundation.h>


@interface FCJSONRecordTreeSource : NSObject <FCJSONRecordTreeSourceType>



@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (copy, nonatomic) NSArray *jsonRecordSources; // ivar: _jsonRecordSources


-(id)initWithContext:(id)arg0 jsonRecordSources:(id)arg1 ;
-(void)fetchRecordTreeWithRootIDs:(id)arg0 branchKeysByRecordType:(id)arg1 cachePolicy:(id)arg2 completion:(id)arg3 ;
-(void)fetchRecordTreeWithRootIDs:(id)arg0 branchKeysByRecordType:(id)arg1 cachePolicy:(id)arg2 edgeCacheHint:(id)arg3 completion:(id)arg4 ;


@end


#endif