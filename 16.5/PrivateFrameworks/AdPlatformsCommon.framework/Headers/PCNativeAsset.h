// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCNATIVEASSET_H
#define PCNATIVEASSET_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PCNativeAsset : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger adamID; // ivar: _adamID
@property (retain, nonatomic) NSArray *assetInformation; // ivar: _assetInformation
@property (nonatomic) NSInteger location; // ivar: _location
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *treatment; // ivar: _treatment


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif