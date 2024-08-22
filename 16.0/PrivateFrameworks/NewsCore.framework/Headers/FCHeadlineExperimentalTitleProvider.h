// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCHEADLINEEXPERIMENTALTITLEPROVIDER_H
#define FCHEADLINEEXPERIMENTALTITLEPROVIDER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCHeadlineExperimentalTitleProvider : NSObject

@property (readonly, copy, nonatomic) NSString *feldsparID; // ivar: _feldsparID
@property (nonatomic) BOOL shouldShowAlternateHeadlines; // ivar: _shouldShowAlternateHeadlines


+(BOOL)isDebugModeEnabled;
-(id)_debugHeadlineMetadataFromTitle:(id)arg0 fromExperimentalTitles:(id)arg1 forArticleID:(id)arg2 ;
-(id)_headlineMetadataFromTitle:(id)arg0 fromExperimentalTitles:(id)arg1 forArticleID:(id)arg2 ;
-(id)headlineMetadataFromTitle:(id)arg0 fromExperimentalTitles:(id)arg1 forArticleID:(id)arg2 ;
-(id)initWithShouldShowAlternateHeadlines:(BOOL)arg0 ;
-(id)metadataForDefaultHeadlineWithTitle:(id)arg0 ;


@end


#endif