// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIHOSTACTIVITYPROXY_H
#define _UIHOSTACTIVITYPROXY_H

@class NSAttributedString, NSUUID, SFProxyText, NSString;
@protocol NSSecureCoding, SHSheetActivityProxy;

#import <Foundation/Foundation.h>

#import "UIActivity.h"

@interface _UIHostActivityProxy : NSObject <NSSecureCoding, SHSheetActivityProxy>

 {
    uint8_t _iconImageSlotID;
    uint8_t _labelSlotID;
    uint8_t _slotTextHeight;
}


@property (readonly, nonatomic) UIActivity *activity; // ivar: _activity
@property (copy, nonatomic) NSAttributedString *activityFooter; // ivar: _activityFooter
@property (retain, nonatomic) NSUUID *activityIdentifierCopy; // ivar: _activityIdentifierCopy
@property (retain, nonatomic) NSUUID *activityIdentifierOpen; // ivar: _activityIdentifierOpen
@property (retain, nonatomic) NSUUID *activityIdentifierShare; // ivar: _activityIdentifierShare
@property (retain, nonatomic) SFProxyText *activityTitle; // ivar: _activityTitle
@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int iconImageSlotID;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) BOOL isDisabled; // ivar: _isDisabled
@property (nonatomic) BOOL isFavorite; // ivar: _isFavorite
@property (nonatomic) BOOL isRestricted; // ivar: _isRestricted
@property (nonatomic) BOOL isUserDefaultsActivity; // ivar: _isUserDefaultsActivity
@property (copy, nonatomic) id *loadHandler; // ivar: _loadHandler
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)load;
-(CGFloat)slotTextHeight;
-(id)initWithActivity:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)imageSlotID;
-(unsigned int)labelSlotID;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setLabelSlotID:(unsigned int)arg0 ;
-(void)setSlotTextHeight:(CGFloat)arg0 ;


@end


#endif