// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSCARRIERLINKPARAMS_H
#define AMSCARRIERLINKPARAMS_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface AMSCarrierLinkParams : NSObject

@property (readonly, nonatomic) NSString *adamId;
@property (retain, nonatomic) NSDictionary *fields; // ivar: _fields
@property (readonly, nonatomic) NSString *linkParamsString; // ivar: _linkParamsString


+(id)_queryDictionaryFromString:(id)arg0 ;
-(id)initWithString:(id)arg0 ;


@end


#endif