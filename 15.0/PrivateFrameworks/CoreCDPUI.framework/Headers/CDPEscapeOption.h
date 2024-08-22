// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPESCAPEOPTION_H
#define CDPESCAPEOPTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CDPEscapeOption : NSObject

@property (copy, nonatomic) id *escapeAction; // ivar: _escapeAction
@property (copy, nonatomic) NSString *progressLabel; // ivar: _progressLabel
@property (copy, nonatomic) NSString *progressTitle; // ivar: _progressTitle
@property (nonatomic) NSUInteger style; // ivar: _style
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)cancelOption;


@end


#endif