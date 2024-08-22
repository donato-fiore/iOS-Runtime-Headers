// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCAMERAERRORCONTENT_H
#define HUCAMERAERRORCONTENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HUCameraErrorContent : NSObject

@property (copy, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


+(id)errorWithTitle:(id)arg0 description:(id)arg1 ;


@end


#endif