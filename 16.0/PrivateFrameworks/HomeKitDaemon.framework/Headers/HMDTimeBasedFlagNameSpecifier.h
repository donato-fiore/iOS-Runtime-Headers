// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDTIMEBASEDFLAGNAMESPECIFIER_H
#define HMDTIMEBASEDFLAGNAMESPECIFIER_H

@class NSString;
@protocol HMDTimeBasedFlagSpecifying;

#import <Foundation/Foundation.h>


@interface HMDTimeBasedFlagNameSpecifier : NSObject <HMDTimeBasedFlagSpecifying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *flagName; // ivar: _flagName
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)specifierWithFlagName:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToGroupNameSpecifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFlagName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif