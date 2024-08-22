// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFHOMEINFO_H
#define AFHOMEINFO_H

@class NSString, NSUUID;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFHomeInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, nonatomic) BOOL activityNotificationsEnabledForPersonalRequests; // ivar: _activityNotificationsEnabledForPersonalRequests
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *homeIdentifier; // ivar: _homeIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithHomeIdentifier:(id)arg0 activityNotificationsEnabledForPersonalRequests:(BOOL)arg1 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif