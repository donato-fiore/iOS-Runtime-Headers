// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDEVENTCOUNTERGROUPNAMESPECIFIER_H
#define HMDEVENTCOUNTERGROUPNAMESPECIFIER_H

@class NSString;
@protocol HMDEventCounterGroupSpecifying;

#import <Foundation/Foundation.h>


@interface HMDEventCounterGroupNameSpecifier : NSObject <HMDEventCounterGroupSpecifying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *groupName; // ivar: _groupName
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)specifierWithGroupName:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToGroupNameSpecifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroupName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif