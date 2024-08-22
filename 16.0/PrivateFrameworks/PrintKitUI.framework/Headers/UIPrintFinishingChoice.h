// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTFINISHINGCHOICE_H
#define UIPRINTFINISHINGCHOICE_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface UIPrintFinishingChoice : NSObject

@property (nonatomic) NSInteger finishingChoiceID; // ivar: _finishingChoiceID
@property (retain, nonatomic) NSDictionary *finishingChoiceInfo; // ivar: _finishingChoiceInfo
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 finishingChoiceID:(NSInteger)arg1 finishingChoiceInfo:(id)arg2 ;


@end


#endif