// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLRSANDBOXEXTENSIONREQUEST_H
#define MLRSANDBOXEXTENSIONREQUEST_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MLRSandboxExtensionRequest : NSObject

@property (readonly, copy, nonatomic) NSArray *URLs; // ivar: _URLs
@property (readonly, nonatomic) BOOL requireWrite; // ivar: _requireWrite


-(id)description;
-(id)initWithURLs:(id)arg0 requireWrite:(BOOL)arg1 ;


@end


#endif