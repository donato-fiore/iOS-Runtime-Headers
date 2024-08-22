// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKBASICSHOWMETADATA_H
#define WLKBASICSHOWMETADATA_H

@class NSDate, NSString;


#import "WLKBasicContentMetadata.h"

@interface WLKBasicShowMetadata : WLKBasicContentMetadata

@property (readonly, nonatomic) NSDate *finaleDate; // ivar: _finaleDate
@property (readonly, copy, nonatomic) NSString *network; // ivar: _network
@property (readonly, nonatomic) NSDate *releaseDate; // ivar: _releaseDate


-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif