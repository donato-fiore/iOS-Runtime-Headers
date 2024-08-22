// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSCREDENTIALENTRYFIELD_H
#define VSCREDENTIALENTRYFIELD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VSCredentialEntryField : NSObject

@property (nonatomic) NSInteger autocapitalizationType; // ivar: _autocapitalizationType
@property (nonatomic) NSInteger autocorrectionType; // ivar: _autocorrectionType
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (copy, nonatomic) NSString *recentsMessage; // ivar: _recentsMessage
@property (copy, nonatomic) NSString *recentsTitle; // ivar: _recentsTitle
@property (nonatomic, getter=isRequired) BOOL required; // ivar: _required
@property (nonatomic) NSInteger returnKeyType; // ivar: _returnKeyType
@property (nonatomic, getter=isSecure) BOOL secure; // ivar: _secure
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)init;


@end


#endif