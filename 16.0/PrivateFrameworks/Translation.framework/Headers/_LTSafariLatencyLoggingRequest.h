// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTSAFARILATENCYLOGGINGREQUEST_H
#define _LTSAFARILATENCYLOGGINGREQUEST_H

@class NSString, NSDictionary;
@protocol _LTLoggingRequest;

#import <Foundation/Foundation.h>

#import "_LTLocalePair.h"

@interface _LTSafariLatencyLoggingRequest : NSObject <_LTLoggingRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dict;
@property (readonly, nonatomic) CGFloat firstParagraphComplete; // ivar: _firstParagraphComplete
@property (readonly, nonatomic) CGFloat firstResponse; // ivar: _firstResponse
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) _LTLocalePair *localePair; // ivar: _localePair
@property (readonly, nonatomic) CGFloat pageComplete; // ivar: _pageComplete
@property (copy, nonatomic) NSString *processName; // ivar: _processName
@property (readonly, nonatomic) CGFloat progressComplete; // ivar: _progressComplete
@property (readonly, nonatomic) CGFloat start; // ivar: _start
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)markFirstParagraphComplete;
-(void)markPageComplete;
-(void)markProgressDone;
-(void)markResponse;


@end


#endif