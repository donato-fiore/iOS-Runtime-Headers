// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRPASTEANNOUNCEMENTENDPOINT_H
#define DRPASTEANNOUNCEMENTENDPOINT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DRPasteAnnouncementEndpoint : NSObject <NSSecureCoding>

 {
    NSString *_localizedName;
}




+(BOOL)supportsSecureCoding;
-(id)_initWithLocalizedName:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif