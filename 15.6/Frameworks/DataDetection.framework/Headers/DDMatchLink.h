// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDMATCHLINK_H
#define DDMATCHLINK_H

@class NSURL;


#import "DDMatch.h"

@interface DDMatchLink : DDMatch

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL


-(id)initWithDDScannerResult:(id)arg0 ;


@end


#endif