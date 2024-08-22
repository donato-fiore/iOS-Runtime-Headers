// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _IDSPASSWORDMANAGER_H
#define _IDSPASSWORDMANAGER_H

@class NSString;
@protocol _IDSPasswordManager;

#import <Foundation/Foundation.h>


@interface _IDSPasswordManager : NSObject <_IDSPasswordManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)setPassword:(id)arg0 forUsername:(id)arg1 onService:(id)arg2 completionBlock:(id)arg3 ;


@end


#endif