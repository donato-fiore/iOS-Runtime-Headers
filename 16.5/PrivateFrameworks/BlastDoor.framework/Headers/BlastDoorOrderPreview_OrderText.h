// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORORDERPREVIEW_ORDERTEXT_H
#define BLASTDOORORDERPREVIEW_ORDERTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorColor.h"

@interface BlastDoorOrderPreview_OrderText : NSObject {
    ? orderPreview_OrderText;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorColor *overrideColor;
@property (nonatomic, readonly) NSString *text;


-(id)init;


@end


#endif