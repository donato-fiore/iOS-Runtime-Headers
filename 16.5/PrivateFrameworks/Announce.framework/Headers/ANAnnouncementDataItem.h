// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANANNOUNCEMENTDATAITEM_H
#define ANANNOUNCEMENTDATAITEM_H

@class NSData, NSString, NSDictionary;
@protocol NSSecureCoding, ANMessage;

#import <Foundation/Foundation.h>


@interface ANAnnouncementDataItem : NSObject <NSSecureCoding, ANMessage>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)strictSecureDecodeFromData:(id)arg0 ;
+(id)strictSecureDecodeFromData:(id)arg0 classList:(id)arg1 decodingFailurePolicy:(NSInteger)arg2 ;
-(id)_stringForDataType:(NSUInteger)arg0 ;
-(id)copy;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 type:(NSUInteger)arg1 ;
-(id)initWithMessage:(id)arg0 ;
-(id)message;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif