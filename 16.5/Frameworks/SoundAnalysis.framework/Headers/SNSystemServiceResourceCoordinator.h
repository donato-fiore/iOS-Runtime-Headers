// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNSYSTEMSERVICERESOURCECOORDINATOR_H
#define SNSYSTEMSERVICERESOURCECOORDINATOR_H

@class NSString;
@protocol SNResourceCoordinatorProtocol;

#import <Foundation/Foundation.h>


@interface SNSystemServiceResourceCoordinator : NSObject <SNResourceCoordinatorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createSystemAudioAnalyzer;


@end


#endif