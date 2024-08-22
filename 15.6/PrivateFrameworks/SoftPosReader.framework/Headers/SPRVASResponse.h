// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPRVASRESPONSE_H
#define SPRVASRESPONSE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPRVASResponse : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *mobileToken; // ivar: _mobileToken
@property (readonly, nonatomic) unsigned short status; // ivar: _status
@property (readonly, copy, nonatomic) NSData *vasData; // ivar: _vasData


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(unsigned short)arg0 vasData:(id)arg1 mobileToken:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif