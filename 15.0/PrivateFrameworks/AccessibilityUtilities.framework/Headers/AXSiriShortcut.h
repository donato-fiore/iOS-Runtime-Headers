// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSIRISHORTCUT_H
#define AXSIRISHORTCUT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXSiriShortcut : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *associatedAppBundleIdentifier; // ivar: _associatedAppBundleIdentifier
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *phrase;
@property (copy, nonatomic) NSString *shortcutName; // ivar: _shortcutName


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAccessibilityWorkflow:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif