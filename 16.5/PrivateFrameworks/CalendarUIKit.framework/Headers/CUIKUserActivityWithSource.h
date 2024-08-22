// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKUSERACTIVITYWITHSOURCE_H
#define CUIKUSERACTIVITYWITHSOURCE_H

@class NSString;


#import "CUIKUserActivity.h"

@interface CUIKUserActivityWithSource : CUIKUserActivity {
    NSInteger _sourceType;
    NSString *_sourceHost;
    NSString *_sourceOwner;
}




-(BOOL)_isLocalSource;
-(BOOL)_requiresHostAndOwner;
-(BOOL)_supportsConsistentExternalIDAcrossDevices;
-(BOOL)_supportsConsistentExternalIDAcrossDevices:(NSInteger)arg0 ;
-(NSUInteger)isMatchForSource:(id)arg0 ;
-(id)dictionary;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSource:(id)arg0 type:(NSUInteger)arg1 ;


@end


#endif