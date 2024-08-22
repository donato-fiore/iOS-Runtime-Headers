// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCORECOMMSAFETYHELPER_H
#define IMCORECOMMSAFETYHELPER_H


#import <Foundation/Foundation.h>


@interface IMCoreCommSafetyHelper : NSObject



+(id)sharedInstance;
-(id)_urlFromAddressList:(id)arg0 ;
-(void)addressesForParents:(id)arg0 completion:(id)arg1 ;
-(void)getOpenChatURLWith:(id)arg0 ;


@end


#endif