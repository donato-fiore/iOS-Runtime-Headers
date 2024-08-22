// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFPROXYCONTAINER_H
#define NFPROXYCONTAINER_H

@class NSString;
@protocol NFRegistrationContainer;

#import <Foundation/Foundation.h>

#import "NFContainer.h"

@interface NFProxyContainer : NSObject <NFRegistrationContainer>



@property (retain, nonatomic) NFContainer *container; // ivar: _container
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NFContainer *privateContainer; // ivar: _privateContainer
@property (readonly) Class superclass;


-(id)initWithContainer:(id)arg0 privateContainer:(id)arg1 ;
-(id)registerClass:(Class)arg0 factory:(id)arg1 ;
-(id)registerClass:(Class)arg0 name:(id)arg1 factory:(id)arg2 ;
-(id)registerKey:(id)arg0 factory:(id)arg1 ;
-(id)registerProtocol:(id)arg0 factory:(id)arg1 ;
-(id)registerProtocol:(id)arg0 name:(id)arg1 factory:(id)arg2 ;
-(id)unsafeRegisterForKey:(id)arg0 name:(id)arg1 factory:(id)arg2 ;


@end


#endif