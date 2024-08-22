// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPSUGGESTIONREQUEST_H
#define VCPSUGGESTIONREQUEST_H

@class VNCanceller, NSArray, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface VCPSuggestionRequest : NSObject

@property (readonly) VNCanceller *canceller; // ivar: _canceller
@property (readonly) NSArray *cflags; // ivar: _cflags
@property (readonly) NSMutableDictionary *clusterFlagByClusterId; // ivar: _clusterFlagByClusterId
@property (readonly) NSArray *csns; // ivar: _csns
@property (readonly) NSString *requestId; // ivar: _requestId
@property (readonly) NSUInteger type; // ivar: _type
@property (copy) id *updateHandler; // ivar: _updateHandler


+(id)requestWithFaceClusterIds:(id)arg0 clusterFlags:(id)arg1 updateHandler:(id)arg2 ;
-(id)initWithFaceClusterIds:(id)arg0 clusterFlags:(id)arg1 updateHandler:(id)arg2 ;


@end


#endif