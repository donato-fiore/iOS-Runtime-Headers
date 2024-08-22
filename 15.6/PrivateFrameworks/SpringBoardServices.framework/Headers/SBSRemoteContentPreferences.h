// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSREMOTECONTENTPREFERENCES_H
#define SBSREMOTECONTENTPREFERENCES_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBSRemoteContentPreferences : NSObject <NSSecureCoding>

 {
    NSInteger _dateTimeStyle;
    NSInteger _backgroundStyle;
    NSInteger _homeGestureMode;
    BOOL _reducesWhitePoint;
    BOOL _suppressesNotifications;
    BOOL _suppressesBottomEdgeContent;
}




+(BOOL)supportsSecureCoding;
-(BOOL)reducesWhitePoint;
-(BOOL)suppressesBottomEdgeContent;
-(BOOL)suppressesNotifications;
-(NSInteger)backgroundStyle;
-(NSInteger)dateTimeStyle;
-(NSInteger)homeGestureMode;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif