// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANANNOUNCEMENTDESTINATION_H
#define ANANNOUNCEMENTDESTINATION_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ANAnnouncement.h"

@interface ANAnnouncementDestination : NSObject <NSSecureCoding>

 {
    BOOL _replyToSender;
}


@property (retain, nonatomic) ANAnnouncement *announcement; // ivar: _announcement
@property (retain, nonatomic) NSString *announcementIdentifier; // ivar: _announcementIdentifier
@property (retain, nonatomic) id *homeObject; // ivar: _homeObject
@property (retain, nonatomic) NSArray *roomObjects; // ivar: _roomObjects
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) NSArray *zoneObjects; // ivar: _zoneObjects


+(BOOL)supportsSecureCoding;
+(id)destinationWithHomeIdentifier:(id)arg0 ;
+(id)destinationWithHomeIdentifier:(id)arg0 zoneIdentifiers:(id)arg1 roomIdentifiers:(id)arg2 ;
+(id)destinationWithHomeName:(id)arg0 ;
+(id)destinationWithHomeName:(id)arg0 zoneNames:(id)arg1 roomNames:(id)arg2 ;
+(id)destinationWithReplyToAnnouncementIdentifier:(id)arg0 ;
+(id)stringFromAnnouncementDestinationType:(NSUInteger)arg0 ;
-(BOOL)replyToSender;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setReplyToSender:(BOOL)arg0 ;


@end


#endif