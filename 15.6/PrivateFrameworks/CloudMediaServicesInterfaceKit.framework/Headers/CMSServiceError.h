// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMSSERVICEERROR_H
#define CMSSERVICEERROR_H


#import <Foundation/Foundation.h>


@interface CMSServiceError : NSObject



+(id)_supportedDomains;
+(id)serviceError:(NSInteger)arg0 withUnderlyingIssue:(id)arg1 ;
+(id)serviceErrorFromCause:(id)arg0 ;


@end


#endif