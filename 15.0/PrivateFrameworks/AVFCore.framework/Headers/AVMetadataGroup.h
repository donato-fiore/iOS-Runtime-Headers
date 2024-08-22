// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVMETADATAGROUP_H
#define AVMETADATAGROUP_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface AVMetadataGroup : NSObject

@property (readonly, nonatomic) NSString *classifyingLabel;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSString *uniqueID;


+(void)initialize;
-(struct opaqueCMFormatDescription *)copyFormatDescription;


@end


#endif