// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSSOSPREYTTSCLIENTFACTORY_H
#define SFSSOSPREYTTSCLIENTFACTORY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SFSSOspreyTTSClientFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *ospreyClientFactory; // ivar: _ospreyClientFactory


+(id)sharedInstance;
-(id)getOspreyClientByUrl:(id)arg0 ;
-(id)getOspreyClientByUrl:(id)arg0 useBlazar:(BOOL)arg1 enableAuthentication:(BOOL)arg2 ;
-(id)init;
-(void)removeAll;


@end


#endif