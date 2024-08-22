// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPHYSICALCARDORDER_H
#define PKPHYSICALCARDORDER_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPhysicalCardOrder : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *artworkIdentifier; // ivar: _artworkIdentifier
@property (copy, nonatomic) NSString *nameOnCard; // ivar: _nameOnCard
@property (nonatomic) NSUInteger reason; // ivar: _reason


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif