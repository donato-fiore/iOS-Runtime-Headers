// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKBANNERPRESENTABLEREQUEST_H
#define PKBANNERPRESENTABLEREQUEST_H


#import <Foundation/Foundation.h>

#import "PKBannerPresentable.h"

@interface PKBannerPresentableRequest : NSObject

@property (readonly, nonatomic) id *context; // ivar: _context
@property (readonly, nonatomic) PKBannerPresentable *presentable; // ivar: _presentable


+(id)createWithPresentable:(id)arg0 context:(id)arg1 ;
-(id)init;


@end


#endif