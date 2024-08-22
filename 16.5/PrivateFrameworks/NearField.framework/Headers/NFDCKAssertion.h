// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFDCKASSERTION_H
#define NFDCKASSERTION_H

@class NSString, SESDCKAssertion;

#import <Foundation/Foundation.h>


@interface NFDCKAssertion : NSObject

@property (readonly, nonatomic) NSString *keyIdentifier;
@property (readonly, nonatomic) SESDCKAssertion *sesAssertion; // ivar: _sesAssertion


-(id)initWithSESAssertion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif