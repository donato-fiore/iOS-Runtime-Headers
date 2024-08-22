// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKSRCSETPARSER_H
#define IKSRCSETPARSER_H

@class NSArray, NSURL;

#import <Foundation/Foundation.h>


@interface IKSrcsetParser : NSObject {
    NSArray *_srcsetRules;
}


@property (readonly, nonatomic) NSURL *resolvedURL;


-(id)initWithSrcsetStr:(id)arg0 defaultStr:(id)arg1 ;


@end


#endif