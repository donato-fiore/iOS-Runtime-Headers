// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKINKMANAGER_H
#define PKINKMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PKInkManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *inks; // ivar: _inks


+(id)defaultInkManager;
+(void)clearCachedManager;
-(id)init;
-(id)inkBehaviorForIdentifier:(id)arg0 variant:(id)arg1 ;
-(id)inkBehaviorForIdentifier:(id)arg0 version:(NSUInteger)arg1 variant:(id)arg2 ;


@end


#endif