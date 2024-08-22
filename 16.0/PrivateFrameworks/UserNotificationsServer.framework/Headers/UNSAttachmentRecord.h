// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSATTACHMENTRECORD_H
#define UNSATTACHMENTRECORD_H

@class NSURL, NSString, NSDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface UNSAttachmentRecord : NSObject

@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) BOOL hiddenFromDefaultExpandedView; // ivar: _hiddenFromDefaultExpandedView
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDictionary *thumbnailClippingRect; // ivar: _thumbnailClippingRect
@property (copy, nonatomic) NSNumber *thumbnailFrameNumber; // ivar: _thumbnailFrameNumber
@property (nonatomic) BOOL thumbnailHidden; // ivar: _thumbnailHidden
@property (copy, nonatomic) NSDictionary *thumbnailTimestamp; // ivar: _thumbnailTimestamp
@property (copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif