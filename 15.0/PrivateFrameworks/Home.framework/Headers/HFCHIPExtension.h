// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCHIPEXTENSION_H
#define HFCHIPEXTENSION_H

@class NSExtension, NSMutableDictionary, NSTimer;

#import <Foundation/Foundation.h>


@interface HFCHIPExtension : NSObject

@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (retain, nonatomic) NSMutableDictionary *futureMap; // ivar: _futureMap
@property (retain, nonatomic) NSTimer *timeoutWorker; // ivar: _timeoutWorker


-(id)initWithExtension:(id)arg0 ;
-(id)listRoomsForHome:(id)arg0 ;
-(id)pairIdentifier:(id)arg0 home:(id)arg1 ;
-(void)_finishRequest:(id)arg0 withError:(id)arg1 ;
-(void)_finishRequest:(id)arg0 withResult:(id)arg1 ;
-(void)_flushTimeoutRequests;
-(void)dealloc;


@end


#endif