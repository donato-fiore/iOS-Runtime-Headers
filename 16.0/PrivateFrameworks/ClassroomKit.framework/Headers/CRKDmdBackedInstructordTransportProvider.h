// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKDMDBACKEDINSTRUCTORDTRANSPORTPROVIDER_H
#define CRKDMDBACKEDINSTRUCTORDTRANSPORTPROVIDER_H

@class NSString;
@protocol CRKTransportProviding;

#import <Foundation/Foundation.h>


@interface CRKDmdBackedInstructordTransportProvider : NSObject <CRKTransportProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)fetchTransportWithCompletion:(id)arg0 ;


@end


#endif