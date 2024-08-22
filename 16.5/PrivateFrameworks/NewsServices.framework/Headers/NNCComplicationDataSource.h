// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNCCOMPLICATIONDATASOURCE_H
#define NNCCOMPLICATIONDATASOURCE_H


#import <Foundation/Foundation.h>


@interface NNCComplicationDataSource : NSObject



+(id)_complicationTitle;
+(id)_loadingStoriesLargeString;
+(id)_loadingStoriesShortString;
+(id)_noNewStoriesLargeString;
+(id)_noNewStoriesShortString;
+(id)_oneLineHeadlineTextProviderForResult:(id)arg0 ;
+(id)_templateForFamily:(NSInteger)arg0 newsStoryResult:(id)arg1 compact:(BOOL)arg2 ;
+(id)fullColorImageProviderWithName:(id)arg0 ;
+(id)imageProviderWithForegroundName:(id)arg0 compact:(BOOL)arg1 ;
+(id)newsTintColor;
+(id)staticTemplateForFamily:(NSInteger)arg0 compact:(BOOL)arg1 ;


@end


#endif