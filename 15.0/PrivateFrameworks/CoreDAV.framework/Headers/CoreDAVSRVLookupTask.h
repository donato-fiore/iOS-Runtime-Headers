// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVSRVLOOKUPTASK_H
#define COREDAVSRVLOOKUPTASK_H

@class NSArray, NSString;


#import "CoreDAVTask.h"

@interface CoreDAVSRVLookupTask : CoreDAVTask

@property (retain, nonatomic) NSArray *fetchedRecords; // ivar: _fetchedRecords
@property (nonatomic) *__CFHost host; // ivar: _host
@property (retain, nonatomic) NSString *serviceString; // ivar: _serviceString


-(id)description;
-(id)initWithServiceString:(id)arg0 ;
-(void)dealloc;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;
-(void)performCoreDAVTask;


@end


#endif