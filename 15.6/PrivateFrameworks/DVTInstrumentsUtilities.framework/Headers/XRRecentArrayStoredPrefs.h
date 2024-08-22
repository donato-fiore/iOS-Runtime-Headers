// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRRECENTARRAYSTOREDPREFS_H
#define XRRECENTARRAYSTOREDPREFS_H

@class NSString;


#import "XRRecentArray.h"

@interface XRRecentArrayStoredPrefs : XRRecentArray {
    NSString *_preferencePathArray;
    NSString *_preferencePathMaxCount;
}




+(id)sharedInstanceForPreferencePath:(id)arg0 ;
-(id)initWithMaximumRecentCount:(NSUInteger)arg0 preferencePath:(id)arg1 ;
-(void)_readUserDefaults;
-(void)dealloc;
-(void)synchronize;


@end


#endif