// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQINAPPMESSAGE_H
#define ICQINAPPMESSAGE_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICQInAppMessage : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic) NSUInteger contentType; // ivar: _contentType
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *sfSymbolName; // ivar: _sfSymbolName
@property (readonly, copy, nonatomic) NSString *subTitle; // ivar: _subTitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)airplaneMode;
+(id)quotaAlmostFull;
+(id)quotaFull;
+(id)serverUnreachable;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentType:(NSUInteger)arg0 identifier:(id)arg1 title:(id)arg2 subTitle:(id)arg3 sfSymbolName:(id)arg4 actions:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif