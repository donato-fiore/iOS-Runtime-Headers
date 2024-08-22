// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKFOCUSEDELEMENTINFO_H
#define WKFOCUSEDELEMENTINFO_H

@class NSString;
@protocol _WKFocusedElementInfo, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WKFocusedElementInfo : NSObject <_WKFocusedElementInfo>

 {
    NSInteger _type;
    RetainPtr<NSString> _value;
    BOOL _isUserInitiated;
    RetainPtr<NSObject<NSSecureCoding>> _userObject;
    RetainPtr<NSString> _placeholder;
    RetainPtr<NSString> _label;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *placeholder;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;
@property (readonly, nonatomic, getter=isUserInitiated) BOOL userInitiated;
@property (readonly, nonatomic) NSObject<NSSecureCoding> *userObject;
@property (readonly, copy, nonatomic) NSString *value;


-(id)initWithFocusedElementInformation:(*void)arg0 isUserInitiated:(BOOL)arg1 userObject:(id)arg2 ;


@end


#endif