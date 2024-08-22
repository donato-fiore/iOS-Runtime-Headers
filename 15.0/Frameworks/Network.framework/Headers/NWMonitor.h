// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWMONITOR_H
#define NWMONITOR_H

@class NSString, NSURL, NSUUID, NSArray;
@protocol NSURLSessionTaskDelegate;

#import <Foundation/Foundation.h>

#import "NWNetworkDescription.h"
#import "NWEndpoint.h"
#import "NWInterface.h"
#import "NWParameters.h"
#import "NWPathEvaluator.h"

@interface NWMonitor : NSObject <NSURLSessionTaskDelegate>



@property (retain) NWNetworkDescription *bestAvailableNetworkDescription; // ivar: _bestAvailableNetworkDescription
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NWEndpoint *endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (retain) NWInterface *interface; // ivar: _interface
@property (retain) NSURL *lastProbeURL; // ivar: _lastProbeURL
@property (retain) NSUUID *lastProbeUUID; // ivar: _lastProbeUUID
@property unsigned int mID; // ivar: _mID
@property (retain) NSArray *networkDescriptionArray; // ivar: _networkDescriptionArray
@property (retain) NWParameters *parameters; // ivar: _parameters
@property (retain) NWPathEvaluator *pathEvaluator; // ivar: _pathEvaluator
@property (readonly, nonatomic) NSString *privateDescription;
@property NSInteger status; // ivar: _status
@property (readonly) Class superclass;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)copySavedMonitorForNetworkDescriptionArray:(id)arg0 endpoint:(id)arg1 parameters:(id)arg2 ;
+(id)mainOperationQueue;
+(id)monitorWithNetworkDescription:(id)arg0 endpoint:(id)arg1 parameters:(id)arg2 ;
+(id)monitorWithNetworkDescriptionArray:(id)arg0 endpoint:(id)arg1 parameters:(id)arg2 ;
+(id)queue;
+(void)initialize;
+(void)saveMonitor:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesNetworkDescriptionArray:(id)arg0 endpoint:(id)arg1 parameters:(id)arg2 ;
-(id)descriptionWithIndent:(int)arg0 showFullContent:(BOOL)arg1 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)dealloc;
-(void)evaluateStartingAtIndex:(NSUInteger)arg0 probeUUID:(id)arg1 probeWasSuccessful:(BOOL)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif