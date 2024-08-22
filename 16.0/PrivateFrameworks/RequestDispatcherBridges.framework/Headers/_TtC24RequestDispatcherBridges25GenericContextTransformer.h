// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC24REQUESTDISPATCHERBRIDGES25GENERICCONTEXTTRANSFORMER_H
#define _TTC24REQUESTDISPATCHERBRIDGES25GENERICCONTEXTTRANSFORMER_H

@protocol AFContextSnapshotTransforming;

#import <Foundation/Foundation.h>


@interface _TtC24RequestDispatcherBridges25GenericContextTransformer : NSObject <AFContextSnapshotTransforming>





-(id)init;
-(void)getRedactedContextForContextSnapshot:(id)arg0 metadata:(id)arg1 privacyPolicy:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif