// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DRPASTEANNOUNCEMENT_H
#define DRPASTEANNOUNCEMENT_H

@class NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DRPasteAnnouncementEndpoint.h"

@interface DRPasteAnnouncement : NSObject <NSSecureCoding>



@property (readonly, nonatomic) DRPasteAnnouncementEndpoint *destination; // ivar: _destination
@property (readonly, nonatomic) NSString *localizedAnnouncementText;
@property (readonly, nonatomic) NSUUID *pasteboardUUID; // ivar: _pasteboardUUID
@property (readonly, nonatomic) DRPasteAnnouncementEndpoint *source; // ivar: _source


+(BOOL)supportsSecureCoding;
-(BOOL)canCoalesceWithAnnouncement:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSource:(id)arg0 destination:(id)arg1 pasteboardUUID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif