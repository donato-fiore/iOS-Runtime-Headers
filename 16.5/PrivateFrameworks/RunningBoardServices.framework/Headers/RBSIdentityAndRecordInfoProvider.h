// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSIDENTITYANDRECORDINFOPROVIDER_H
#define RBSIDENTITYANDRECORDINFOPROVIDER_H

@class NSString;
@protocol RBSWrappedLSInfoProvider;

#import <Foundation/Foundation.h>


@interface RBSIdentityAndRecordInfoProvider : NSObject <RBSWrappedLSInfoProvider>

 {
    NSString *_personaString;
    NSString *_bundleID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_providerWithIdentity:(id)arg0 record:(id)arg1 ;
-(id)_initWithIdentity:(id)arg0 record:(id)arg1 ;
-(id)fetchWrappedInfoWithError:(*id)arg0 ;


@end


#endif