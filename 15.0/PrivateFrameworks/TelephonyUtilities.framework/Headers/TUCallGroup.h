// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUCALLGROUP_H
#define TUCALLGROUP_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface TUCallGroup : NSObject

@property (readonly, copy, nonatomic) NSArray *calls; // ivar: _calls
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) int status;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCallGroup:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCall:(id)arg0 ;
-(id)initWithCalls:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif