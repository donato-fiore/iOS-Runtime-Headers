// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCPLAYBACKPOSITIONVALUESERVICE_H
#define SBCPLAYBACKPOSITIONVALUESERVICE_H

@class NSString;
@protocol SBCDomainValueServiceProtocol;


#import "SBCPlaybackPositionService.h"

@interface SBCPlaybackPositionValueService : SBCPlaybackPositionService <SBCDomainValueServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif