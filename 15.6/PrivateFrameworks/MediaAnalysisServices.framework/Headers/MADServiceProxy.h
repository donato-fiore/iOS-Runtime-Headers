// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MADSERVICEPROXY_H
#define MADSERVICEPROXY_H

@protocol VCPMediaAnalysisClientProtocol;

#import <Foundation/Foundation.h>

#import "MADService.h"

@interface MADServiceProxy : NSObject <VCPMediaAnalysisClientProtocol>

 {
    MADService *_service;
}




-(id)initWithService:(id)arg0 ;
-(void)reportProgress:(CGFloat)arg0 forRequest:(int)arg1 ;


@end


#endif