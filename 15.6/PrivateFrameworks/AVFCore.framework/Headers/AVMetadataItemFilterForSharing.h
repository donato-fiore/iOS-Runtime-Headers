// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMETADATAITEMFILTERFORSHARING_H
#define AVMETADATAITEMFILTERFORSHARING_H



#import "AVMetadataItemFilter.h"

@interface AVMetadataItemFilterForSharing : AVMetadataItemFilter



+(void)addIdentifier:(id)arg0 toWhitelistDictionary:(id)arg1 ;
+(void)addKeySpace:(id)arg0 key:(id)arg1 toWhitelistDictionary:(id)arg2 ;
-(id)whitelist;


@end


#endif