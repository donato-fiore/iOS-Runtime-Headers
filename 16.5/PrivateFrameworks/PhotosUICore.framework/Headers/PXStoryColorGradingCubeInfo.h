// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCOLORGRADINGCUBEINFO_H
#define PXSTORYCOLORGRADINGCUBEINFO_H

@class NSDictionary, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface PXStoryColorGradingCubeInfo : NSObject {
    NSDictionary *_backingDict;
}


@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) BOOL isAutoSelectable;
@property (readonly, nonatomic) BOOL isUserSelectable;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *resource;
@property (readonly, nonatomic) NSString *tier;


-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif