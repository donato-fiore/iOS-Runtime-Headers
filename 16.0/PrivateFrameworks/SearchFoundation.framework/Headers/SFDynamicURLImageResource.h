// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFDYNAMICURLIMAGERESOURCE_H
#define SFDYNAMICURLIMAGERESOURCE_H

@class NSString, NSDictionary, NSArray, NSData;
@protocol SFDynamicURLImageResource, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFDynamicURLImageResource : NSObject <SFDynamicURLImageResource, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *formatURL; // ivar: _formatURL
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *imageOptions; // ivar: _imageOptions
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat pixelHeight; // ivar: _pixelHeight
@property (nonatomic) CGFloat pixelWidth; // ivar: _pixelWidth
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsResizing; // ivar: _supportsResizing


+(BOOL)supportsSecureCoding;
-(BOOL)hasPixelHeight;
-(BOOL)hasPixelWidth;
-(BOOL)hasSupportsResizing;
-(id)_sf_replacementStringForPropertyEntryKey:(id)arg0 value:(id)arg1 ;
-(id)_sf_urlForSettings:(id)arg0 shouldResize:(BOOL)arg1 width:(CGFloat)arg2 height:(CGFloat)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)sf_urlForSettings:(id)arg0 ;
-(id)sf_urlForSettings:(id)arg0 size:(struct CGSize )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif