// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMNICKNAMEENCRYPTIONTAG_H
#define IMNICKNAMEENCRYPTIONTAG_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface IMNicknameEncryptionTag : NSObject

@property (retain, nonatomic) NSData *dataRepresentation; // ivar: _dataRepresentation
@property (readonly, nonatomic) NSString *stringRepresentation;


+(id)_tagWithDataRepresentation:(id)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)_tagWithStringRepresentation:(id)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTag:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithDataRepresentation:(id)arg0 ;


@end


#endif