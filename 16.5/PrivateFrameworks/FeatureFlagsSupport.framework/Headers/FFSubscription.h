// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FFSUBSCRIPTION_H
#define FFSUBSCRIPTION_H


#import <Foundation/Foundation.h>


@interface FFSubscription : NSObject



+(id)decodeFromDictionary:(id)arg0 ;
+(id)mergeSubscriptions:(id)arg0 ;
-(BOOL)matchesFeature:(id)arg0 inDomain:(id)arg1 inAlreadyLockedConfiguration:(id)arg2 ;
-(BOOL)matchesFeature:(id)arg0 inDomain:(id)arg1 inConfiguration:(id)arg2 ;
-(id)encodeToDictionary;
-(id)init;
-(id)initPrivate;
-(id)nameOfClass;


@end


#endif