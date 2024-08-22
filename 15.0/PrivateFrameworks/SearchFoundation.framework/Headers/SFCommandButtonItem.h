// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCOMMANDBUTTONITEM_H
#define SFCOMMANDBUTTONITEM_H

@class NSString, NSDictionary, NSData, NSArray;
@protocol SFCommandButtonItem, NSSecureCoding, NSCopying;


#import "SFButtonItem.h"
#import "SFCommand.h"
#import "SFImage.h"

@interface SFCommandButtonItem : SFButtonItem <SFCommandButtonItem, NSSecureCoding, NSCopying>



@property (retain, nonatomic) SFCommand *command; // ivar: _command
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SFImage *image; // ivar: _image
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *previewButtonItems; // ivar: _previewButtonItems
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger uniqueId;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif