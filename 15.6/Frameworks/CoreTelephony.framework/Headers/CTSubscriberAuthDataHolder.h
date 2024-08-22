// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTSUBSCRIBERAUTHDATAHOLDER_H
#define CTSUBSCRIBERAUTHDATAHOLDER_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTSubscriberAuthDataHolder : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *dict; // ivar: _dict


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)data;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif