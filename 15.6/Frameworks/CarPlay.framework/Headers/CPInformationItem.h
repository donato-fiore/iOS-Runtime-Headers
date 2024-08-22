// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPINFORMATIONITEM_H
#define CPINFORMATIONITEM_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPInformationItem : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *detail; // ivar: _detail
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 detail:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif