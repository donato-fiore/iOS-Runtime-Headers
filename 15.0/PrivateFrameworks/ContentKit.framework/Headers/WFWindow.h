// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWINDOW_H
#define WFWINDOW_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding, WFNaming;

#import <Foundation/Foundation.h>

#import "WFImage.h"

@interface WFWindow : NSObject <NSCopying, NSSecureCoding, WFNaming>



@property (readonly, nonatomic) NSString *applicationName; // ivar: _applicationName
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) WFImage *image; // ivar: _image
@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (nonatomic) BOOL isActiveLoaded; // ivar: _isActiveLoaded
@property (readonly, nonatomic) CGPoint position; // ivar: _position
@property (nonatomic) BOOL positionLoaded; // ivar: _positionLoaded
@property (readonly, nonatomic) int processIdentifier; // ivar: _processIdentifier
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (nonatomic) BOOL sizeLoaded; // ivar: _sizeLoaded
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly, nonatomic) NSNumber *windowIndex; // ivar: _windowIndex


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif