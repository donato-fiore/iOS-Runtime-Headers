// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGPORTRAITREQUESTCLIENT_H
#define SGPORTRAITREQUESTCLIENT_H

@class _PASXPCClientHelper;

#import <Foundation/Foundation.h>


@interface SGPortraitRequestClient : NSObject {
    _PASXPCClientHelper *_clientHelper;
}




+(id)sharedInstance;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)extractionsFromSearchableItems:(id)arg0 error:(*id)arg1 ;
-(id)extractionsFromUserAction:(id)arg0 searchableItem:(id)arg1 error:(*id)arg2 ;
-(id)init;


@end


#endif