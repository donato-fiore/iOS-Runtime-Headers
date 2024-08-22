// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDAUSTRIPINFO_H
#define ASDAUSTRIPINFO_H

@class NSString, NSDictionary;


#import "ASDDSPItemInfo.h"

@interface ASDAUStripInfo : ASDDSPItemInfo

@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) NSDictionary *value; // ivar: _value


+(BOOL)containsOnlyAUStrips:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDictionary:(id)arg0 resourcePath:(id)arg1 ;


@end


#endif