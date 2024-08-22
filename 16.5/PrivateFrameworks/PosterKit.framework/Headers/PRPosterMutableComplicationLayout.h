// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPOSTERMUTABLECOMPLICATIONLAYOUT_H
#define PRPOSTERMUTABLECOMPLICATIONLAYOUT_H

@class NSArray, PRSWidget;


#import "PRPosterComplicationLayout.h"

@interface PRPosterMutableComplicationLayout : PRPosterComplicationLayout

@property (copy, nonatomic) NSArray *complications;
@property (copy, nonatomic) PRSWidget *inlineComplication;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;


@end


#endif