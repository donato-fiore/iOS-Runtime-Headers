// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCLURLREQUESTREWRITERULE_H
#define MCLURLREQUESTREWRITERULE_H

@class NSRegularExpression, NSString;

#import <Foundation/Foundation.h>


@interface MCLURLRequestRewriteRule : NSObject {
    id *_block;
}


@property (readonly, nonatomic) NSRegularExpression *matchPattern; // ivar: _matchPattern
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) float priority; // ivar: _priority


+(id)urlRequestRewriteRuleWithMatchPattern:(id)arg0 block:(id)arg1 ;
-(id)initWithMatchExpression:(id)arg0 block:(id)arg1 ;
-(void)rewriteURLRequest:(id)arg0 ;


@end


#endif