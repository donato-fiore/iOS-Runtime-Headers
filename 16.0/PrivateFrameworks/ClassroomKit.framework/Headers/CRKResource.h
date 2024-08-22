// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKRESOURCE_H
#define CRKRESOURCE_H

@class NSDictionary, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRKResource : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (retain, nonatomic) NSURL *hostedURL; // ivar: _hostedURL
@property (nonatomic, getter=isZippedBundle) BOOL zippedBundle; // ivar: _zippedBundle


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHostedResource:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithHostedURL:(id)arg0 isZippedBundle:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif