// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTCOREMODELGROUP_H
#define AVTCOREMODELGROUP_H

@class NSArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "AVTEditingPreviewMode.h"

@interface AVTCoreModelGroup : NSObject

@property (readonly, copy, nonatomic) NSArray *categories; // ivar: _categories
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) AVTEditingPreviewMode *previewMode; // ivar: _previewMode
@property (readonly, copy, nonatomic) NSDictionary *symbolNames; // ivar: _symbolNames


-(id)description;
-(id)initWithName:(id)arg0 symbolNames:(id)arg1 previewMode:(id)arg2 categories:(id)arg3 ;


@end


#endif