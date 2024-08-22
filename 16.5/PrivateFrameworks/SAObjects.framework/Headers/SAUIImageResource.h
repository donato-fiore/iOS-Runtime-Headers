// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUIIMAGERESOURCE_H
#define SAUIIMAGERESOURCE_H

@class NSString, NSData, NSURL;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAUIImageResource : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *imageData;
@property (nonatomic) CGFloat pixelHeight;
@property (nonatomic) CGFloat pixelWidth;
@property (nonatomic) CGFloat pointHeight;
@property (nonatomic) CGFloat pointWidth;
@property (copy, nonatomic) NSURL *resourceUrl;
@property (nonatomic) CGFloat scaleFactor;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *urlFormatString;
@property (copy, nonatomic) NSString *userAgent;


+(id)imageResource;
+(id)imageResourceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif