// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INUICKPENTRYPOINT_H
#define INUICKPENTRYPOINT_H

@class NSString;
@protocol CRKIdentifiedProviding;

#import <Foundation/Foundation.h>


@interface INUICKPEntryPoint : NSObject <CRKIdentifiedProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (readonly) Class superclass;


-(void)requestCardSectionViewProviderForCard:(id)arg0 delegate:(id)arg1 reply:(id)arg2 ;
-(void)requestIdentifiedCardSectionViewProviderForCard:(id)arg0 delegate:(id)arg1 reply:(id)arg2 ;


@end


#endif