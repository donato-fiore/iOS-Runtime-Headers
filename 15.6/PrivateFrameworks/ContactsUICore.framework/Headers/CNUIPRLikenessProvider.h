// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUIPRLIKENESSPROVIDER_H
#define CNUIPRLIKENESSPROVIDER_H

@class NSString, PRLikeness;
@protocol CNUIPRLikenessProvider;

#import <Foundation/Foundation.h>


@interface CNUIPRLikenessProvider : NSObject <CNUIPRLikenessProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PRLikeness *likeness; // ivar: _likeness
@property (readonly) Class superclass;


-(id)initWithPRLikeness:(id)arg0 ;


@end


#endif