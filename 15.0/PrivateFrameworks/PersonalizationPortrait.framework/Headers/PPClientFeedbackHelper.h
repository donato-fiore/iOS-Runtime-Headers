// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPCLIENTFEEDBACKHELPER_H
#define PPCLIENTFEEDBACKHELPER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PPClientFeedbackHelper : NSObject {
    NSString *_parentObjectClass;
    NSString *_clientIdentifier;
}


@property (retain, nonatomic) NSString *clientIdentifier;


-(id)initWithParentObject:(id)arg0 ;


@end


#endif