// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSURLPARSER_H
#define AMSURLPARSER_H

@class NSString;
@protocol AMSBagConsumer, AMSBagProtocol;

#import <Foundation/Foundation.h>


@interface AMSURLParser : NSObject <AMSBagConsumer>



@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createBagForSubProfile;
-(BOOL)_matchURL:(id)arg0 toPatterns:(id)arg1 ;
-(id)_commerceUIArrayForKey:(id)arg0 ;
-(id)_correctURL:(id)arg0 ;
-(id)_defaultWebAllowedForURL:(id)arg0 ;
-(id)_dynamicUIAllowedForURL:(id)arg0 ;
-(id)_legacyWebAllowedForURL:(id)arg0 ;
-(id)initWithBag:(id)arg0 ;
-(id)initWithBagContract:(id)arg0 ;
-(id)isCommerceUIURL:(id)arg0 ;
-(id)typeForCommerceUIURL:(id)arg0 ;
-(id)typeForURL:(id)arg0 ;
-(void)_waitForPromises:(id)arg0 block:(id)arg1 ;


@end


#endif