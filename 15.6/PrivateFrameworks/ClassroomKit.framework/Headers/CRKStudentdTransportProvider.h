// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKSTUDENTDTRANSPORTPROVIDER_H
#define CRKSTUDENTDTRANSPORTPROVIDER_H

@class NSString;
@protocol CRKTransportProviding;

#import <Foundation/Foundation.h>


@interface CRKStudentdTransportProvider : NSObject <CRKTransportProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)fetchTransportWithCompletion:(id)arg0 ;


@end


#endif