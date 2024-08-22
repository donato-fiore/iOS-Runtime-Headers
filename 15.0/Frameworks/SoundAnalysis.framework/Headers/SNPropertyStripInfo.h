// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNPROPERTYSTRIPINFO_H
#define SNPROPERTYSTRIPINFO_H

@class NSString, NSDictionary;


#import "SNDSPItemInfo.h"

@interface SNPropertyStripInfo : SNDSPItemInfo

@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) NSString *resourcePath; // ivar: _resourcePath
@property (readonly, nonatomic) NSDictionary *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDictionary:(id)arg0 resourcePath:(id)arg1 ;


@end


#endif