// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCONCRETENETWORKPATH_H
#define CRKCONCRETENETWORKPATH_H

@class NSString, NSArray;
@protocol CRKNetworkPath, OS_nw_path;

#import <Foundation/Foundation.h>


@interface CRKConcreteNetworkPath : NSObject <CRKNetworkPath>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *interfaces; // ivar: _interfaces
@property (readonly, nonatomic, getter=isSatisfied) BOOL satisfied;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_nw_path> *underlyingPath; // ivar: _underlyingPath


-(id)initWithUnderlyingPath:(id)arg0 ;


@end


#endif