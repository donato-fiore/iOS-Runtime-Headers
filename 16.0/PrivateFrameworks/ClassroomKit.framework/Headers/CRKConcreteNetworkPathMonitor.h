// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCONCRETENETWORKPATHMONITOR_H
#define CRKCONCRETENETWORKPATHMONITOR_H

@class NSString;
@protocol CRKNetworkPathMonitor, OS_nw_path_monitor;

#import <Foundation/Foundation.h>

#import "CRKConcreteNetworkPath.h"

@interface CRKConcreteNetworkPathMonitor : NSObject <CRKNetworkPathMonitor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CRKConcreteNetworkPath *path; // ivar: _path
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *underlyingPathMonitor; // ivar: _underlyingPathMonitor


-(id)initWithUnderlyingPathMonitor:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)resume;
-(void)updateWithPath:(id)arg0 ;


@end


#endif