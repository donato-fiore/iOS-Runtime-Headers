// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDOCUMENTQUERYSERVER_H
#define HDDOCUMENTQUERYSERVER_H

@class NSArray;


#import "HDQueryServer.h"

@interface HDDocumentQueryServer : HDQueryServer {
    BOOL _suspended;
    NSArray *_authorizedSamples;
    NSUInteger _clientSampleIndex;
}


@property (readonly, nonatomic) BOOL includeDocumentData; // ivar: _includeDocumentData
@property (readonly, nonatomic) NSUInteger maxResults; // ivar: _maxResults
@property (readonly, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors


+(Class)queryClass;
+(id)requiredEntitlements;
-(BOOL)validateConfiguration:(*id)arg0 ;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;


@end


#endif