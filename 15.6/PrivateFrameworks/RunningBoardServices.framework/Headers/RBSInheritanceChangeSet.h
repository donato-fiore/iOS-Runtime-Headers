// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSINHERITANCECHANGESET_H
#define RBSINHERITANCECHANGESET_H

@class NSString, NSSet;
@protocol RBSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface RBSInheritanceChangeSet : NSObject <RBSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *gainedInheritances; // ivar: _gainedInheritances
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *lostInheritances; // ivar: _lostInheritances
@property (readonly) Class superclass;


+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithGainedInheritances:(id)arg0 lostInheritances:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif