// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HVINTERACTION_H
#define HVINTERACTION_H

@class NSString, INInteraction;
@protocol NSCopying, BMIdentifiableContentEvent;

#import <Foundation/Foundation.h>


@interface HVInteraction : NSObject <NSCopying, BMIdentifiableContentEvent>



@property (readonly, nonatomic) CGFloat absoluteTimestamp;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) INInteraction *interaction; // ivar: _interaction
@property (readonly, nonatomic) NSString *uniqueId;


+(id)domainIdForInteractionGroupId:(id)arg0 ;
+(id)uniqueIdForInteractionIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithInteraction:(id)arg0 bundleIdentifier:(id)arg1 ;


@end


#endif