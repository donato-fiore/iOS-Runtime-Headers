// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCDOWNLOADJOBIDENTIFIER_H
#define BRCDOWNLOADJOBIDENTIFIER_H

@class NSString;
@protocol BRCJobIdentifying;

#import <Foundation/Foundation.h>


@interface BRCDownloadJobIdentifier : NSObject <BRCJobIdentifying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *etag; // ivar: _etag
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger itemDBRowID; // ivar: _itemDBRowID
@property (readonly, nonatomic) int kind; // ivar: _kind
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDownloadJobIdentifier:(id)arg0 ;
-(id)columns;
-(id)columnsValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDBRowID:(NSUInteger)arg0 etag:(id)arg1 kind:(int)arg2 ;
-(id)jobsDescription;
-(id)matchingJobsWhereSQLClause;


@end


#endif