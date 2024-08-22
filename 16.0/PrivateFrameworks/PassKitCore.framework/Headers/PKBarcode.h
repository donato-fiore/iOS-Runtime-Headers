// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKBARCODE_H
#define PKBARCODE_H

@class NSString, NSData, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKBarcode : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *altText; // ivar: _altText
@property (nonatomic) NSInteger format; // ivar: _format
@property (copy, nonatomic) NSString *header; // ivar: _header
@property (readonly, nonatomic) BOOL isTall;
@property (copy, nonatomic) NSData *messageData; // ivar: _messageData
@property (copy, nonatomic) NSDictionary *options; // ivar: _options
@property (nonatomic) BOOL shouldRemoveQuietZone; // ivar: _shouldRemoveQuietZone


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPassDictionary:(id)arg0 bundle:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif