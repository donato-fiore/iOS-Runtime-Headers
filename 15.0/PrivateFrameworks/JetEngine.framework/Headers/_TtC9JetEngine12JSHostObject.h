// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9JETENGINE12JSHOSTOBJECT_H
#define _TTC9JETENGINE12JSHOSTOBJECT_H

@class NSString;
@protocol _TtP9JetEngineP33_3B280445E2AC6E2542A3DCC2FD82BB2C19JSHostObjectExports_;

#import <Foundation/Foundation.h>


@interface _TtC9JetEngine12JSHostObject : NSObject <_TtP9JetEngineP33_3B280445E2AC6E2542A3DCC2FD82BB2C19JSHostObjectExports_>



@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *clientVersion;
@property (nonatomic, readonly) NSString *deviceLocalizedModel;
@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic, readonly) NSString *osBuild;
@property (nonatomic, readonly) NSString *platform;


-(BOOL)isOSAtLeast:(id)arg0 ;
-(id)init;


@end


#endif