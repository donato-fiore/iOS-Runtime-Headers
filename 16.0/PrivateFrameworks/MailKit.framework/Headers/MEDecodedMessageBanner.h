// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEDECODEDMESSAGEBANNER_H
#define MEDECODEDMESSAGEBANNER_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MEDecodedMessageBanner : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic, getter=isDismissable) BOOL dismissable; // ivar: _dismissable
@property (readonly, nonatomic) NSString *primaryActionTitle; // ivar: _primaryActionTitle
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 primaryActionTitle:(id)arg1 dismissable:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif