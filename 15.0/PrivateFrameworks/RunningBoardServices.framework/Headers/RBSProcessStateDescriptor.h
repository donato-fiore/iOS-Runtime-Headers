// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSPROCESSSTATEDESCRIPTOR_H
#define RBSPROCESSSTATEDESCRIPTOR_H

@class NSSet, NSString, NSArray;
@protocol RBSXPCSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RBSProcessStateDescriptor : NSObject <RBSXPCSecureCoding, NSCopying>

 {
    NSSet *_endowmentNamespaces;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *endowmentNamespaces;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger values; // ivar: _values


+(BOOL)supportsRBSXPCSecureCoding;
+(id)descriptor;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;
-(void)filterState:(id)arg0 ;


@end


#endif