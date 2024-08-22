// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFAIRDROPPAYLOAD_H
#define SFAIRDROPPAYLOAD_H

@class NSURL, NSData, NSString, UIImage;

#import <Foundation/Foundation.h>


@interface SFAirDropPayload : NSObject

@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) NSInteger identifer; // ivar: _identifer
@property (copy, nonatomic) NSString *payloadDescription; // ivar: _payloadDescription
@property (retain, nonatomic) UIImage *previewImage; // ivar: _previewImage
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (nonatomic) BOOL wasString; // ivar: _wasString


+(id)newPayloadWithData:(id)arg0 ofType:(id)arg1 description:(id)arg2 previewImage:(id)arg3 identifier:(NSInteger)arg4 ;
+(id)newPayloadWithURL:(id)arg0 description:(id)arg1 previewImage:(id)arg2 identifier:(NSInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif