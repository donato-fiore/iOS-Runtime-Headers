// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSRECENTLYUSEDAUTOFILLSET_H
#define WBSRECENTLYUSEDAUTOFILLSET_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface WBSRecentlyUsedAutoFillSet : NSObject

@property (readonly, copy, nonatomic) NSArray *fillMatches; // ivar: _fillMatches
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, copy, nonatomic) NSArray *skipMatches; // ivar: _skipMatches


-(id)initWithFillMatches:(id)arg0 skipMatches:(id)arg1 label:(id)arg2 ;


@end


#endif