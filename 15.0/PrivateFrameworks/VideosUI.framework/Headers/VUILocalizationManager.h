// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUILOCALIZATIONMANAGER_H
#define VUILOCALIZATIONMANAGER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VUILocalizationManager : NSObject

@property (retain) NSDictionary *overideLocDict; // ivar: _overideLocDict


+(id)sharedInstance;
-(id)localizedStringForKey:(id)arg0 ;
-(id)localizedStringForKey:(id)arg0 withCounts:(id)arg1 ;
-(void)updateWithJSDictionary:(id)arg0 ;


@end


#endif