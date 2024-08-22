// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMREGEXENTRY_H
#define CDMREGEXENTRY_H

@class NSString, NSRegularExpression;

#import <Foundation/Foundation.h>


@interface CDMRegexEntry : NSObject

@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSRegularExpression *regularExpression; // ivar: _regularExpression


-(id)initWithRegex:(id)arg0 label:(id)arg1 ;


@end


#endif