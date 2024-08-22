// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSKTVERIFICATIONINFOPROVIDER_H
#define IDSKTVERIFICATIONINFOPROVIDER_H

@class NSString;
@protocol KTVerificationInfoProvider;

#import <Foundation/Foundation.h>


@interface IDSKTVerificationInfoProvider : NSObject <KTVerificationInfoProvider>



@property (retain, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier


-(id)initWithApplicationIdentifier:(id)arg0 ;
-(void)fetchPeerVerificationInfos:(id)arg0 completionBlock:(id)arg1 ;
-(void)fetchSelfVerificationInfo:(id)arg0 ;
-(void)healSelf:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif