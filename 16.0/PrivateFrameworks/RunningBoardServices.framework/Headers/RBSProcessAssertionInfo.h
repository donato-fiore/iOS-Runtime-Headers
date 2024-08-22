// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSPROCESSASSERTIONINFO_H
#define RBSPROCESSASSERTIONINFO_H

@class NSString;
@protocol NSCopying, RBSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface RBSProcessAssertionInfo : NSObject <NSCopying, RBSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (copy, nonatomic) NSString *explanation; // ivar: _explanation
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger reason; // ivar: _reason
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned char type; // ivar: _type


+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLegacyAssertionReason:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(id)initWithType:(unsigned char)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif