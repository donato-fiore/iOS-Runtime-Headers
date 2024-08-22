// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNDSPGRAPHINFO_H
#define SNDSPGRAPHINFO_H

@class NSArray, NSString, NSDictionary;


#import "SNDSPItemInfo.h"

@interface SNDSPGraphInfo : SNDSPItemInfo

@property (retain, nonatomic) NSArray *includePaths; // ivar: _includePaths
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) NSDictionary *substitutions; // ivar: _substitutions
@property (retain, nonatomic) NSString *text; // ivar: _text


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDictionary:(id)arg0 resourcePath:(id)arg1 ;


@end


#endif