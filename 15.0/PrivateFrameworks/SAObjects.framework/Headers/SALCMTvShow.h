// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SALCMTVSHOW_H
#define SALCMTVSHOW_H

@class NSString;


#import "SALCMContent.h"

@interface SALCMTvShow : SALCMContent

@property (copy, nonatomic) NSString *seriesName;


+(id)tvShow;
+(id)tvShowWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif