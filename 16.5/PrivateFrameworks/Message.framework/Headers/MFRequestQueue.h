// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFREQUESTQUEUE_H
#define MFREQUESTQUEUE_H

@class NSString, NSMutableArray;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface MFRequestQueue : NSObject <EFLoggable>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *requestPairs; // ivar: _requestPairs
@property (readonly) Class superclass;


+(id)log;
+(id)signpostLog;
-(BOOL)_processRequests:(id)arg0 ;
-(BOOL)addRequest:(id)arg0 ;
-(BOOL)addRequests:(id)arg0 ;
-(BOOL)addRequests:(id)arg0 combine:(BOOL)arg1 ;
-(BOOL)processRequest:(id)arg0 ;
-(BOOL)processRequests:(id)arg0 ;
-(BOOL)sendRequests:(id)arg0 ;
-(NSUInteger)signpostID;
-(id)init;


@end


#endif