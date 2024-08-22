// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMNETWORKPATH_H
#define _HMNETWORKPATH_H

@class NSString;
@protocol _HMNetworkPath, OS_nw_path;

#import <Foundation/Foundation.h>


@interface _HMNetworkPath : NSObject <_HMNetworkPath>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_nw_path> *nwPath; // ivar: _nwPath
@property (readonly, nonatomic) int status;
@property (readonly) Class superclass;


-(id)initWithNwPath:(id)arg0 ;


@end


#endif