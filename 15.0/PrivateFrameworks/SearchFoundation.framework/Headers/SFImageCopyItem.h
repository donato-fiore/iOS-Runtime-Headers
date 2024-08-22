// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFIMAGECOPYITEM_H
#define SFIMAGECOPYITEM_H

@class NSString, NSDictionary, NSData;
@protocol SFImageCopyItem, NSSecureCoding, NSCopying;


#import "SFCopyItem.h"
#import "SFImage.h"

@interface SFImageCopyItem : SFCopyItem <SFImageCopyItem, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SFImage *image; // ivar: _image
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif