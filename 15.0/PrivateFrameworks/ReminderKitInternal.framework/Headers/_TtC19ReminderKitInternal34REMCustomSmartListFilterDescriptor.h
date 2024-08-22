// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC19REMINDERKITINTERNAL34REMCUSTOMSMARTLISTFILTERDESCRIPTOR_H
#define _TTC19REMINDERKITINTERNAL34REMCUSTOMSMARTLISTFILTERDESCRIPTOR_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC19ReminderKitInternal34REMCustomSmartListFilterDescriptor : NSObject <NSSecureCoding>

 {
    ? hashtags;
    ? date;
    ? time;
    ? priorities;
    ? flagged;
    ? location;
}


@property (nonatomic, readonly) NSString *description;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif