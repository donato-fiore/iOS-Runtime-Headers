// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMTEMPLATECONTENTATTRIBUTES_H
#define REMTEMPLATECONTENTATTRIBUTES_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMTemplateContentAttributes : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL hasDisplayDate; // ivar: _hasDisplayDate
@property (readonly, nonatomic) BOOL hasHashtags; // ivar: _hasHashtags
@property (readonly, nonatomic) BOOL hasImageAttachments; // ivar: _hasImageAttachments
@property (readonly, nonatomic) BOOL hasLocationTriggersOrVehicleEventTriggers; // ivar: _hasLocationTriggersOrVehicleEventTriggers
@property (readonly, nonatomic) NSInteger reminderCount; // ivar: _reminderCount


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReminderCount:(NSInteger)arg0 hasDisplayDate:(BOOL)arg1 hasHashtags:(BOOL)arg2 hasLocationTriggersOrVehicleEventTriggers:(BOOL)arg3 hasImageAttachments:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif