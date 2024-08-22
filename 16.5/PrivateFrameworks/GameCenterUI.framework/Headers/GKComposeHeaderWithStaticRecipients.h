// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCOMPOSEHEADERWITHSTATICRECIPIENTS_H
#define GKCOMPOSEHEADERWITHSTATICRECIPIENTS_H

@class NSArray;


#import "GKComposeHeaderField.h"

@interface GKComposeHeaderWithStaticRecipients : GKComposeHeaderField

@property (retain, nonatomic) NSArray *recipientNameStrings; // ivar: _recipientNameStrings


-(void)layoutSubviews;


@end


#endif