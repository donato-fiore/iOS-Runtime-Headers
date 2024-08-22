// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFMESSAGEATTACHMENT_H
#define SFMESSAGEATTACHMENT_H

@class NSString, NSDictionary, NSData, NSURL;
@protocol SFMessageAttachment, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFPhotosLibraryImage.h"

@interface SFMessageAttachment : NSObject <SFMessageAttachment, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSData *linkMetadata; // ivar: _linkMetadata
@property (retain, nonatomic) SFPhotosLibraryImage *photosLibraryImage; // ivar: _photosLibraryImage
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type
@property (copy, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(BOOL)hasType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif