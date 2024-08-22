// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTRELLOACCESSRESOURCE_H
#define WFTRELLOACCESSRESOURCE_H

@class NSArray;


#import "WFAccountAccessResource.h"

@interface WFTrelloAccessResource : WFAccountAccessResource

@property (readonly, copy, nonatomic) NSArray *accounts;


+(id)userInterfaceClasses;
+(id)userInterfaceProtocol;
-(Class)accountClass;
-(id)associatedAppIdentifier;
-(void)makeAvailableWithRemoteInterface:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif