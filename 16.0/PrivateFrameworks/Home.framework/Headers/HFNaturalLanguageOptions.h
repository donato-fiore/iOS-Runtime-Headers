// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFNATURALLANGUAGEOPTIONS_H
#define HFNATURALLANGUAGEOPTIONS_H

@class NSMutableDictionary, HMHome;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HFNaturalLanguageOptions : NSObject <NSCopying>



@property (readonly, nonatomic) NSMutableDictionary *extraOptions; // ivar: _extraOptions
@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif