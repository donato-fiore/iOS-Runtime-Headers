// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DYGTCAMETALLAYERINFO_H
#define DYGTCAMETALLAYERINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DYGTCAMetalLayerInfo : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger deviceAddress; // ivar: _deviceAddress
@property (nonatomic) NSUInteger deviceStreamRef; // ivar: _deviceStreamRef
@property (nonatomic) CGRect frame; // ivar: _frame
@property (nonatomic) NSUInteger layerAddress; // ivar: _layerAddress
@property (nonatomic) NSUInteger layerStreamRef; // ivar: _layerStreamRef
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *windowTitle; // ivar: _windowTitle


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif