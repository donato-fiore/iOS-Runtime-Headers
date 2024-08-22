// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHMANAGEDSESSIONDRIVERDAEMONDELEGATE_H
#define SHMANAGEDSESSIONDRIVERDAEMONDELEGATE_H

@class NSString, NSUUID;
@protocol SHMatcherDelegate, SHSessionDriverDelegate;

#import <Foundation/Foundation.h>


@interface SHManagedSessionDriverDaemonDelegate : NSObject <SHMatcherDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *inflightRequestID; // ivar: _inflightRequestID
@property (readonly, nonatomic) NSUUID *matchingSignatureID; // ivar: _matchingSignatureID
@property (weak, nonatomic) NSObject<SHSessionDriverDelegate> *sessionDriverDelegate; // ivar: _sessionDriverDelegate
@property (readonly) Class superclass;


-(void)matcher:(id)arg0 didProduceResponse:(id)arg1 ;


@end


#endif