// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDDSPGRAPHINFO_H
#define ASDDSPGRAPHINFO_H

@class NSArray, NSString, NSDictionary;


#import "ASDDSPItemInfo.h"

@interface ASDDSPGraphInfo : ASDDSPItemInfo

@property (copy, nonatomic) NSArray *includePaths; // ivar: _includePaths
@property (copy, nonatomic) NSString *path; // ivar: _path
@property (copy, nonatomic) NSDictionary *substitutions; // ivar: _substitutions
@property (copy, nonatomic) NSString *text; // ivar: _text


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDictionary:(id)arg0 resourcePath:(id)arg1 ;


@end


#endif