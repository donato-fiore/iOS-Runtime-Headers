// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKEXPLORERDOTCOLOROPTIONS_H
#define NTKEXPLORERDOTCOLOROPTIONS_H

@class UIColor;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NTKExplorerDotColorOptions : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) UIColor *connectedDotBackgroundColor; // ivar: _connectedDotBackgroundColor
@property (retain, nonatomic) UIColor *connectedDotColor; // ivar: _connectedDotColor
@property (retain, nonatomic) UIColor *noServiceDotColor; // ivar: _noServiceDotColor


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif