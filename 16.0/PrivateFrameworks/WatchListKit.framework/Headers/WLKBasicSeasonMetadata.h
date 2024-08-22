// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKBASICSEASONMETADATA_H
#define WLKBASICSEASONMETADATA_H

@class NSString, NSNumber;


#import "WLKBasicContentMetadata.h"

@interface WLKBasicSeasonMetadata : WLKBasicContentMetadata

@property (readonly, copy, nonatomic) NSString *canonicalShowID; // ivar: _canonicalShowID
@property (readonly, nonatomic) NSNumber *seasonNumber; // ivar: _seasonNumber


+(id)seasonsWithDictionaries:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif