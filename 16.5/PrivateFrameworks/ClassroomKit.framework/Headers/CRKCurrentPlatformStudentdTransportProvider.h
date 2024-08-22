// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCURRENTPLATFORMSTUDENTDTRANSPORTPROVIDER_H
#define CRKCURRENTPLATFORMSTUDENTDTRANSPORTPROVIDER_H

@class NSString;
@protocol CRKTransportProviding;

#import <Foundation/Foundation.h>


@interface CRKCurrentPlatformStudentdTransportProvider : NSObject <CRKTransportProviding>

 {
    id<CRKTransportProviding> *mBaseProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)makeProviderForCurrentPlatform;
-(void)fetchTransportWithCompletion:(id)arg0 ;


@end


#endif