// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFNDEFRECORD_H
#define NFNDEFRECORD_H

@class NSData, NSString;
@protocol NSSecureCoding, NFNdefRecord;

#import <Foundation/Foundation.h>


@interface NFNdefRecord : NSObject <NSSecureCoding, NFNdefRecord>

 {
    unsigned char _firstOctet;
    NSData *_identifier;
    NSData *_type;
    NSData *_payload;
}


@property (nonatomic) BOOL chunked;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned char header;
@property (retain, nonatomic) NSData *identifier;
@property (nonatomic) BOOL messageBegin;
@property (nonatomic) BOOL messageEnd;
@property (retain, nonatomic) NSData *payload;
@property (nonatomic) BOOL shortRecord;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *type;
@property (nonatomic) unsigned char typeNameFormat;


+(BOOL)supportsSecureCoding;
+(id)emptyRecord;
+(id)recordWithTelephone:(id)arg0 ;
+(id)recordWithText:(id)arg0 lang:(id)arg1 ;
+(id)recordWithURI:(id)arg0 ;
+(id)recordsFromBytes:(*void)arg0 length:(unsigned int)arg1 ;
-(BOOL)_idLengthPresent;
-(BOOL)isURIRecord;
-(id)asData;
-(id)decode;
-(id)init;
-(id)initWithBytes:(*void)arg0 length:(unsigned int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNDEFRecord:(id)arg0 ;
-(void)_setIdLengthPresent:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif