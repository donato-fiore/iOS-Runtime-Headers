// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSCARDSINGLESELECTION_H
#define AMSCARDSINGLESELECTION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSCardSingleSelection : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *passSerialNumber; // ivar: _passSerialNumber
@property (copy, nonatomic) NSString *passTypeIdentifier; // ivar: _passTypeIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPassTypeIdentifier:(id)arg0 passSerialNumber:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif