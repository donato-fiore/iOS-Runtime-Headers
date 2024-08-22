// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSENDRECIPIENT_H
#define WFSENDRECIPIENT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFSendRecipient : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *address; // ivar: _address
@property (readonly, nonatomic) NSInteger contactType;
@property (copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 address:(id)arg1 ;
-(id)recipientContentItem;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif