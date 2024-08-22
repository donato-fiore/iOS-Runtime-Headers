// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSREMOTECONTENTPREFERENCES_H
#define SBSREMOTECONTENTPREFERENCES_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBSRemoteContentPreferences : NSObject <NSSecureCoding>

 {
    NSInteger _dateTimeStyle;
    NSInteger _backgroundStyle;
    NSInteger _homeGestureMode;
    NSInteger _preferredNotificationListMode;
    BOOL _reducesWhitePoint;
    BOOL _suppressesNotifications;
    BOOL _suppressesBottomEdgeContent;
    BOOL _dismissesOnTap;
    BOOL _prefersInlinePresentation;
}




+(BOOL)supportsSecureCoding;
-(BOOL)dismissesOnTap;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)prefersInlinePresentation;
-(BOOL)reducesWhitePoint;
-(BOOL)suppressesBottomEdgeContent;
-(BOOL)suppressesNotifications;
-(NSInteger)backgroundStyle;
-(NSInteger)dateTimeStyle;
-(NSInteger)homeGestureMode;
-(NSInteger)preferredNotificationListMode;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif