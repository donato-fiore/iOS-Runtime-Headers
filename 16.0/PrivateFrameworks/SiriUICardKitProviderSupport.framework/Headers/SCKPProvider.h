// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCKPPROVIDER_H
#define SCKPPROVIDER_H

@class NSString;
@protocol CRKIdentifiedProviding;

#import <Foundation/Foundation.h>


@interface SCKPProvider : NSObject <CRKIdentifiedProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (readonly) Class superclass;


-(id)init;
-(void)requestCardSectionViewProviderForCard:(id)arg0 delegate:(id)arg1 reply:(id)arg2 ;
-(void)requestIdentifiedCardSectionViewProviderForCard:(id)arg0 delegate:(id)arg1 reply:(id)arg2 ;


@end


#endif