// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17COREODIESSENTIALS18ODICONTACTSMANAGER_H
#define _TTC17COREODIESSENTIALS18ODICONTACTSMANAGER_H

@protocol _TtP17CoreODIEssentials26ODIContactsManagerProtocol_;

#import <Foundation/Foundation.h>


@interface _TtC17CoreODIEssentials18ODIContactsManager : NSObject <_TtP17CoreODIEssentials26ODIContactsManagerProtocol_>

 {
    ? contactStore;
    ? accessQueue;
    ? _meContact;
}




+(id)sharedInstance;
+(void)setSharedInstance:(id)arg0 ;
-(BOOL)reloadMeContact;
-(id)getMeContact;
-(id)init;


@end


#endif