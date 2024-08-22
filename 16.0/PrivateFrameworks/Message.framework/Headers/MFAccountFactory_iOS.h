// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFACCOUNTFACTORY_IOS_H
#define MFACCOUNTFACTORY_IOS_H

@protocol EDAccountFactory;

#import <Foundation/Foundation.h>


@interface MFAccountFactory_iOS : NSObject <EDAccountFactory>





-(id)accountWithIdentifier:(id)arg0 ;
-(id)accountWithSystemAccount:(id)arg0 ;


@end


#endif