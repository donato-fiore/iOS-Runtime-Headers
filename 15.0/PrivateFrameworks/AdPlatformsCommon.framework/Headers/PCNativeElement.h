// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PCNATIVEELEMENT_H
#define PCNATIVEELEMENT_H

@class NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PCNativeAsset.h"
#import "PCNativeButton.h"
#import "PCNativeStyle.h"

@interface PCNativeElement : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *accessibleCaption; // ivar: _accessibleCaption
@property (retain, nonatomic) NSURL *actionURL; // ivar: _actionURL
@property (retain, nonatomic) PCNativeAsset *asset; // ivar: _asset
@property (retain, nonatomic) PCNativeButton *button; // ivar: _button
@property (retain, nonatomic) NSString *caption; // ivar: _caption
@property (nonatomic) NSInteger elementID; // ivar: _elementID
@property (retain, nonatomic) PCNativeStyle *style; // ivar: _style


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif