// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLTMUTABLESSUFILE_H
#define FLTMUTABLESSUFILE_H

@class NSArray, NSString;


#import "FLTSSUFile.h"
#import "FLTSSUMetadata.h"

@interface FLTMutableSSUFile : FLTSSUFile

@property (copy, nonatomic) NSArray *categories;
@property (nonatomic) unsigned short format_version;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) FLTSSUMetadata *metadata;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif