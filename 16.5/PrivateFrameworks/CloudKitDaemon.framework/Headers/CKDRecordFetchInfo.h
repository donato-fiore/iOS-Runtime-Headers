// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDRECORDFETCHINFO_H
#define CKDRECORDFETCHINFO_H

@class NSError, NSString, CKRecord, CKRecordID;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CKDRecordFetchInfo : NSObject

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSString *etag; // ivar: _etag
@property (nonatomic) NSUInteger fetchOrder; // ivar: _fetchOrder
@property (nonatomic) BOOL ignoreErrors; // ivar: _ignoreErrors
@property (retain, nonatomic) CKRecord *record; // ivar: _record
@property (retain, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (retain, nonatomic) NSObject<OS_dispatch_source> *recordReadySource; // ivar: _recordReadySource
@property (readonly, nonatomic) CGFloat startDate; // ivar: _startDate
@property (nonatomic) NSUInteger state; // ivar: _state


-(id)CKPropertiesDescription;
-(id)description;
-(id)initWithAggregator:(id)arg0 ;
-(void)performCallback;


@end


#endif