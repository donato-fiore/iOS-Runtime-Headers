// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BNPOSTINGCONTEXT_H
#define BNPOSTINGCONTEXT_H

@class NSUUID, NSDictionary;
@protocol BNPresentable;

#import <Foundation/Foundation.h>


@interface BNPostingContext : NSObject

@property (readonly, copy, nonatomic) NSUUID *pendingIdentifier;
@property (readonly, nonatomic) NSObject<BNPresentable> *presentable; // ivar: _presentable
@property (readonly, nonatomic) NSUInteger presentationOptions; // ivar: _presentationOptions
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(id)initWithPresentable:(id)arg0 presentationOptions:(NSUInteger)arg1 userInfo:(id)arg2 ;


@end


#endif