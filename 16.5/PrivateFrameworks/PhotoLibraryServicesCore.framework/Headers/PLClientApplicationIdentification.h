// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLIENTAPPLICATIONIDENTIFICATION_H
#define PLCLIENTAPPLICATIONIDENTIFICATION_H

@class NSString;
@protocol PLClientIdentification;

#import <Foundation/Foundation.h>


@interface PLClientApplicationIdentification : NSObject <PLClientIdentification>

 {
    ? _clientAuditToken;
    int _clientProcessIdentifier;
    NSString *_trustedCallerBundleID;
}


@property (readonly, nonatomic) ? clientAuditToken;
@property (readonly, nonatomic) int clientProcessIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *trustedCallerBundleID;


-(id)initWithConnection:(id)arg0 ;


@end


#endif