// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUICODEENTRYCONTEXT_H
#define AAUICODEENTRYCONTEXT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AAUICodeEntryContext : NSObject <NSCopying>



@property (copy, nonatomic) id *cancelEntryAction; // ivar: _cancelEntryAction
@property (copy, nonatomic) id *codeEnteredAction; // ivar: _codeEnteredAction
@property (copy, nonatomic) id *escapeAction; // ivar: _escapeAction
@property (copy, nonatomic) NSString *escapeTitle; // ivar: _escapeTitle
@property (copy, nonatomic) NSString *promptMessage; // ivar: _promptMessage
@property (copy, nonatomic) NSString *promptTitle; // ivar: _promptTitle


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif