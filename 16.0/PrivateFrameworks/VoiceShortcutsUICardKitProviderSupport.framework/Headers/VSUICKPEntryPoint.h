// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSUICKPENTRYPOINT_H
#define VSUICKPENTRYPOINT_H

@class NSString;
@protocol CRKIdentifiedProviding;

#import <Foundation/Foundation.h>


@interface VSUICKPEntryPoint : NSObject <CRKIdentifiedProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (readonly) Class superclass;


-(NSUInteger)displayPriorityForCard:(id)arg0 ;
-(id)cardViewControllerForCard:(id)arg0 ;


@end


#endif