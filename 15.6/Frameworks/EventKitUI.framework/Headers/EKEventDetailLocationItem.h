// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTDETAILLOCATIONITEM_H
#define EKEVENTDETAILLOCATIONITEM_H

@class NSURL, UITapGestureRecognizer, NSString;
@protocol UITextViewDelegate;

#import <Foundation/Foundation.h>

#import "EKTextViewWithLabelTextMetrics.h"

@interface EKEventDetailLocationItem : NSObject <UITextViewDelegate>

 {
    EKTextViewWithLabelTextMetrics *_locationView;
    NSURL *_locationURL;
    UITapGestureRecognizer *_locationTapRecognizer;
    BOOL _locationIsAttendee;
    NSInteger _locationStatus;
    NSString *_locationComment;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification; // ivar: _hasMapItemLaunchOptionFromTimeToLeaveNotification
@property (readonly) NSUInteger hash;
@property (retain) NSString *locationTitle; // ivar: _locationTitle
@property (readonly) Class superclass;


+(BOOL)isValidLocation:(id)arg0 event:(id)arg1 ;
-(id)initWithLocationName:(id)arg0 forEvent:(id)arg1 ;
-(id)locationView;
-(void)_locationTapped;
-(void)textViewDidChangeSelection:(id)arg0 ;
-(void)updateAttributedString;
-(void)updateLocation:(id)arg0 forEvent:(id)arg1 ;


@end


#endif