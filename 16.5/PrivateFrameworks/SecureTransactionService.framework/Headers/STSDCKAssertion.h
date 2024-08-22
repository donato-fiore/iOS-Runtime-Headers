// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSDCKASSERTION_H
#define STSDCKASSERTION_H

@class NFDCKAssertion, NSString;

#import <Foundation/Foundation.h>


@interface STSDCKAssertion : NSObject

@property (readonly, nonatomic) NFDCKAssertion *assertion; // ivar: _assertion
@property (readonly, nonatomic) NSString *keyIdentifier;


-(id)initWithAssertion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif