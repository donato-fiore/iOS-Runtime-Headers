// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFHOMEANNOUNCEMENTSNAPSHOT_H
#define AFHOMEANNOUNCEMENTSNAPSHOT_H

@class NSString;
@protocol AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>

#import "AFHomeAnnouncement.h"

@interface AFHomeAnnouncementSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) AFHomeAnnouncement *lastPlayedAnnouncement; // ivar: _lastPlayedAnnouncement
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)ad_shortDescription;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithSerializedBackingStore:(id)arg0 ;
-(id)initWithState:(NSUInteger)arg0 lastPlayedAnnouncement:(id)arg1 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(id)serializedBackingStore;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif