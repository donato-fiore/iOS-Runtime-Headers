// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACDISAMBIGUATIONITEM_H
#define CACDISAMBIGUATIONITEM_H

@class NSString, UIImage;

#import <Foundation/Foundation.h>


@interface CACDisambiguationItem : NSObject

@property (readonly) NSString *displayDescription;
@property (readonly) UIImage *displayImage;
@property (readonly) NSString *displayName;
@property (nonatomic) NSInteger type; // ivar: _type


-(void)startInteraction;


@end


#endif