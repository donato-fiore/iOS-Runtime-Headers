// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DRPASTEANNOUNCEMENT_H
#define DRPASTEANNOUNCEMENT_H

@class NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DRPasteAnnouncementEndpoint.h"

@interface DRPasteAnnouncement : NSObject <NSSecureCoding>



@property (readonly, nonatomic) DRPasteAnnouncementEndpoint *destination; // ivar: _destination
@property (readonly, nonatomic) NSString *localizedAnnouncementText;
@property (readonly, nonatomic) NSString *localizedAuthorizationText;
@property (readonly, nonatomic) NSUUID *pasteboardUUID; // ivar: _pasteboardUUID
@property (readonly, nonatomic) DRPasteAnnouncementEndpoint *source; // ivar: _source
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout


+(BOOL)supportsSecureCoding;
-(BOOL)canCoalesceWithAnnouncement:(id)arg0 ;
-(id)_localizedTextRequiringAuthorization:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSource:(id)arg0 destination:(id)arg1 pasteboardUUID:(id)arg2 timeout:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif