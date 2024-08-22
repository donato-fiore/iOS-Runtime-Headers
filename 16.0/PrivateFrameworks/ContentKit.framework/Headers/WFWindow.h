// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWINDOW_H
#define WFWINDOW_H

@class NSString, WFImage, NSNumber;
@protocol NSCopying, NSSecureCoding, WFNaming;

#import <Foundation/Foundation.h>


@interface WFWindow : NSObject <NSCopying, NSSecureCoding, WFNaming>



@property (readonly, nonatomic) NSString *applicationName; // ivar: _applicationName
@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (nonatomic) BOOL boundsLoaded; // ivar: _boundsLoaded
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) WFImage *image; // ivar: _image
@property (readonly, nonatomic) BOOL isOnScreen;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CGPoint position;
@property (readonly, nonatomic) int processIdentifier; // ivar: _processIdentifier
@property (readonly, nonatomic) CGSize size;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (retain, nonatomic) NSNumber *windowIndex; // ivar: _windowIndex


+(BOOL)supportsSecureCoding;
+(id)allWindows;
+(id)allWindowsForBundleIdentifiers:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif