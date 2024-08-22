// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTPLANTRANSFERATTRIBUTES_H
#define CTPLANTRANSFERATTRIBUTES_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTPlanTransferAttributes : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger transferCapability; // ivar: _transferCapability
@property (nonatomic) NSUInteger transferStatus; // ivar: _transferStatus


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransferCapability:(NSUInteger)arg0 transferStatus:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif