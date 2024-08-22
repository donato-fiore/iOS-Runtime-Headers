// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSWIDGETKEY_H
#define CHSWIDGETKEY_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CHSWidgetMetrics.h"
#import "CHSWidget.h"

@interface CHSWidgetKey : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CHSWidgetMetrics *metrics; // ivar: _metrics
@property (readonly, nonatomic) CHSWidget *widget; // ivar: _widget


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWidget:(id)arg0 metrics:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif