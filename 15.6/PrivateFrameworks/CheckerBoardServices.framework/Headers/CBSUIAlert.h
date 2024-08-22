// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBSUIALERT_H
#define CBSUIALERT_H

@class NSMutableArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CBSUIAlert : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableArray *actions; // ivar: _actions
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) NSInteger preferredStyle; // ivar: _preferredStyle
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)alertWithTitle:(id)arg0 message:(id)arg1 preferredStyle:(NSInteger)arg2 ;
-(id)alertController;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 preferredStyle:(NSInteger)arg2 ;
-(void)_receiveResponse;
-(void)_sendCreate;
-(void)_sendDismiss;
-(void)activate;
-(void)addAction:(id)arg0 ;
-(void)deactivate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif