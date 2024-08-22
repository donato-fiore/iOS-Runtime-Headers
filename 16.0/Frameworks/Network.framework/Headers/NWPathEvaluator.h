// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWPATHEVALUATOR_H
#define NWPATHEVALUATOR_H

@protocol OS_nw_path_evaluator;

#import <Foundation/Foundation.h>

#import "NWEndpoint.h"
#import "NWPath.h"
#import "NWParameters.h"

@interface NWPathEvaluator : NSObject

@property (readonly, nonatomic) NWEndpoint *endpoint; // ivar: _endpoint
@property (readonly) NSObject<OS_nw_path_evaluator> *internalEvaluator; // ivar: _internalEvaluator
@property (retain) NWPath *internalPath; // ivar: _internalPath
@property (readonly) NWParameters *parameters; // ivar: _parameters
@property (readonly, nonatomic) NWPath *path;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)copySavedPathEvaluatorForEndpoint:(id)arg0 parameters:(id)arg1 ;
+(id)sharedDefaultEvaluator;
+(void)initialize;
+(void)savePathEvaluator:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesEndpoint:(id)arg0 parameters:(id)arg1 ;
-(BOOL)requestNexus;
-(NSUInteger)hash;
-(id)copyPath;
-(id)init;
-(id)initWithBrowseDescriptor:(id)arg0 parameters:(id)arg1 ;
-(id)initWithEndpoint:(id)arg0 parameters:(id)arg1 ;
-(id)initWithEvaluator:(id)arg0 parameters:(id)arg1 ;
-(id)initWithListenParameters:(id)arg0 ;
-(void)dealloc;
-(void)satisfyPathAgentsWithCompletionHandler:(id)arg0 ;
-(void)triggerPathAgentsIncludingVoluntary:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)triggerVoluntaryPathAgentsWithCompletionHandler:(id)arg0 ;


@end


#endif