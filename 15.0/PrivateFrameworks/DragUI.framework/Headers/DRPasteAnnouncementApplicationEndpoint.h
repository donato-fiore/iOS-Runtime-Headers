// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DRPASTEANNOUNCEMENTAPPLICATIONENDPOINT_H
#define DRPASTEANNOUNCEMENTAPPLICATIONENDPOINT_H

@class NSString, NSData;


#import "DRPasteAnnouncementEndpoint.h"

@interface DRPasteAnnouncementApplicationEndpoint : DRPasteAnnouncementEndpoint {
    ? _flags;
}


@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSData *persistentIdentifier; // ivar: _persistentIdentifier


+(BOOL)supportsSecureCoding;
+(id)homeScreenEndpoint;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalizedName:(id)arg0 persistentIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif