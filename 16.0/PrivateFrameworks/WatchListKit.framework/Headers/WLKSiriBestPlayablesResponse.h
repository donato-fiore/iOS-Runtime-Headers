// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKSIRIBESTPLAYABLESRESPONSE_H
#define WLKSIRIBESTPLAYABLESRESPONSE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface WLKSiriBestPlayablesResponse : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (copy, nonatomic) NSDictionary *playablesByID; // ivar: _playablesByID


-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)playableForStatsID:(id)arg0 ;


@end


#endif