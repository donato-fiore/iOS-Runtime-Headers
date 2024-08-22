// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCREDENTIALMATCHCRITERIA_H
#define WBSCREDENTIALMATCHCRITERIA_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface WBSCredentialMatchCriteria : NSObject

@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *partialUsername; // ivar: _partialUsername


-(id)initWithURL:(id)arg0 options:(NSUInteger)arg1 partialUsername:(id)arg2 ;


@end


#endif