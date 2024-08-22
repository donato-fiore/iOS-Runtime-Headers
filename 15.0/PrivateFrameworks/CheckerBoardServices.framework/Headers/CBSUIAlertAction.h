// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBSUIALERTACTION_H
#define CBSUIALERTACTION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CBSUIAlertAction : NSObject <NSSecureCoding>



@property (copy, nonatomic) id *handler; // ivar: _handler
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)alertActionWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif