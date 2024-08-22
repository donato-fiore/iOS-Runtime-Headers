// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEMESSAGESIGNER_H
#define MEMESSAGESIGNER_H

@class NSData, NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MEMessageSigner : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *context; // ivar: _context
@property (readonly, copy, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEmailAddresses:(id)arg0 signatureLabel:(id)arg1 context:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif