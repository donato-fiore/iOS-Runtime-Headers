// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RERESOURCEFETCHCLIENTOBJECT_H
#define RERESOURCEFETCHCLIENTOBJECT_H

@class NSString;
@protocol REResourceFetchService;

#import <Foundation/Foundation.h>


@interface REResourceFetchClientObject : NSObject <REResourceFetchService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) int pidversion; // ivar: _pidversion
@property (readonly, copy, nonatomic) NSString *redactedDescription;
@property (readonly, nonatomic) *void resourceFetchManager; // ivar: _resourceFetchManager
@property (readonly) Class superclass;


-(id)initWithResourceFetchManager:(*void)arg0 connection:(struct Connection *)arg1 ;
-(void)associateConnectionWithPeerID:(NSUInteger)arg0 ;
-(void)invalidate;
-(void)resourceAtAssetPath:(id)arg0 payloadDidUpdate:(id)arg1 error:(id)arg2 ;


@end


#endif