// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSSAVEDENDOWMENT_H
#define RBSSAVEDENDOWMENT_H

@class NSString;
@protocol NSCopying, RBSXPCSecureCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RBSSavedEndowment : NSObject <NSCopying, RBSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<NSSecureCoding> *endowment; // ivar: _endowment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly) Class superclass;


+(BOOL)supportsRBSXPCSecureCoding;
+(id)savedEndowment:(id)arg0 withKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithEndowment:(id)arg0 andKey:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif