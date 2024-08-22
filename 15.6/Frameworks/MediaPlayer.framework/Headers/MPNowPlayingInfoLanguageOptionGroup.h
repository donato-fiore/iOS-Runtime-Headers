// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPNOWPLAYINGINFOLANGUAGEOPTIONGROUP_H
#define MPNOWPLAYINGINFOLANGUAGEOPTIONGROUP_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "MPNowPlayingInfoLanguageOption.h"

@interface MPNowPlayingInfoLanguageOptionGroup : NSObject

@property (readonly, nonatomic) BOOL allowEmptySelection;
@property (readonly, nonatomic) MPNowPlayingInfoLanguageOption *defaultLanguageOption;
@property (readonly, nonatomic) NSArray *languageOptions;
@property (readonly, nonatomic) *void mrLanguageOptionGroup; // ivar: _mrLanguageOptionGroup


-(id)initWithLanguageOptions:(id)arg0 defaultLanguageOption:(id)arg1 allowEmptySelection:(BOOL)arg2 ;
-(id)initWithMRLanguageOptionGroup:(*void)arg0 ;
-(void)dealloc;


@end


#endif