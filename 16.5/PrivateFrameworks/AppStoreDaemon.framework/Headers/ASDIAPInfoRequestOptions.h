// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDIAPINFOREQUESTOPTIONS_H
#define ASDIAPINFOREQUESTOPTIONS_H

@class NSArray;


#import "ASDRequestOptions.h"

@interface ASDIAPInfoRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSArray *adamIds; // ivar: _adamIds


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAdamIds:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif