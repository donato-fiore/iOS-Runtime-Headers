// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLTOOLBARBUTTONOPTION_H
#define QLTOOLBARBUTTONOPTION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface QLToolbarButtonOption : NSObject <NSSecureCoding>



@property (readonly) NSString *identifier; // ivar: _identifier
@property NSInteger style; // ivar: _style
@property (copy) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)cancelOption;
-(BOOL)isCancel;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif