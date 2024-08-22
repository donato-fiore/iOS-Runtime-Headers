// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBCODABLE_H
#define PBCODABLE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PBCodable : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *data;


+(BOOL)supportsSecureCoding;
+(id)options;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)formattedText;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif