// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRPOSTERFOCUSCONFIGURATION_H
#define PRPOSTERFOCUSCONFIGURATION_H

@class NSString, NSUUID;
@protocol NSSecureCoding, BSXPCSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PRPosterFocusConfiguration : NSObject <NSSecureCoding, BSXPCSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (readonly, copy, nonatomic) NSUUID *activityUUID; // ivar: _activityUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFocusConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithActivityIdentifier:(id)arg0 activityUUID:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif