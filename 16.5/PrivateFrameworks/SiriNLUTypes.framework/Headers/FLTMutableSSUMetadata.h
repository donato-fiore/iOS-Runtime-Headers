// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLTMUTABLESSUMETADATA_H
#define FLTMUTABLESSUMETADATA_H

@class NSString, NSArray;


#import "FLTSSUMetadata.h"

@interface FLTMutableSSUMetadata : FLTSSUMetadata

@property (copy, nonatomic) NSString *data_version;
@property (copy, nonatomic) NSString *encoder_version;
@property (nonatomic) NSInteger timestamp;
@property (copy, nonatomic) NSArray *user_data;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif