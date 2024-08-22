// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNDSPGRAPHINFO_H
#define SNDSPGRAPHINFO_H

@class NSString, NSArray, NSDictionary;


#import "SNDSPItemInfo.h"

@interface SNDSPGraphInfo : SNDSPItemInfo {
    NSString *_path;
    NSString *_text;
    NSArray *_includePaths;
    NSDictionary *_substitutions;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDictionary:(id)arg0 resourcePath:(id)arg1 ;


@end


#endif