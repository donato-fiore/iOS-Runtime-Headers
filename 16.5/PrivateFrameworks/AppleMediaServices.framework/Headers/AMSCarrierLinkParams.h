// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSCARRIERLINKPARAMS_H
#define AMSCARRIERLINKPARAMS_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSCarrierLinkParams : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *adamId;
@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSString *linkParamsString; // ivar: _linkParamsString


+(BOOL)supportsSecureCoding;
+(id)_queryDictionaryFromString:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif