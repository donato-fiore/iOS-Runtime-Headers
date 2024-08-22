// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMREMINDERCREATIONCONTEXT_H
#define REMREMINDERCREATIONCONTEXT_H

@class NSDateComponents, CLLocation, NSString, NSAttributedString, NSData, NSURL, NSUserActivity;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMReminderCreationContext : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDateComponents *dueDateComponents; // ivar: _dueDateComponents
@property (copy, nonatomic) CLLocation *location; // ivar: _location
@property (nonatomic) NSInteger locationProximity; // ivar: _locationProximity
@property (copy, nonatomic) NSString *locationString; // ivar: _locationString
@property (copy, nonatomic) NSAttributedString *notes; // ivar: _notes
@property (nonatomic) CGPoint screenOriginOffset; // ivar: _screenOriginOffset
@property (copy, nonatomic) NSData *siriFoundInAppsData; // ivar: _siriFoundInAppsData
@property (copy, nonatomic) NSAttributedString *title; // ivar: _title
@property (nonatomic) BOOL titleIsGeneratedSuggestion; // ivar: _titleIsGeneratedSuggestion
@property (copy, nonatomic) NSURL *url; // ivar: _url
@property (retain, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity
@property (nonatomic) BOOL wantsExtendedDetailOnlyView; // ivar: _wantsExtendedDetailOnlyView


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif