// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIHOSTACTIVITYPROXY_H
#define _UIHOSTACTIVITYPROXY_H

@class NSUUID, NSString;
@protocol NSSecureCoding, SHSheetLoadableProxy;

#import <Foundation/Foundation.h>

#import "UIActivity.h"

@interface _UIHostActivityProxy : NSObject <NSSecureCoding, SHSheetLoadableProxy>

 {
    uint8_t _imageSlotID;
    uint8_t _labelSlotID;
    uint8_t _platterTextHeight;
}


@property (readonly, nonatomic) UIActivity *activity; // ivar: _activity
@property (retain, nonatomic) NSUUID *activityIdentifierCopy; // ivar: _activityIdentifierCopy
@property (retain, nonatomic) NSUUID *activityIdentifierOpen; // ivar: _activityIdentifierOpen
@property (retain, nonatomic) NSUUID *activityIdentifierShare; // ivar: _activityIdentifierShare
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (nonatomic, getter=isFavorite) BOOL favorite; // ivar: _favorite
@property (readonly) NSUInteger hash;
@property unsigned int imageSlotID;
@property unsigned int labelSlotID;
@property (copy, nonatomic) id *loadHandler; // ivar: _loadHandler
@property (nonatomic, getter=isLongPressable) BOOL longPressable; // ivar: _longPressable
@property CGFloat platterTextHeight;
@property (readonly, nonatomic) NSUUID *proxyIdentifier; // ivar: _proxyIdentifier
@property (nonatomic, getter=isRestricted) BOOL restricted; // ivar: _restricted
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)load;
-(id)initWithActivity:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif