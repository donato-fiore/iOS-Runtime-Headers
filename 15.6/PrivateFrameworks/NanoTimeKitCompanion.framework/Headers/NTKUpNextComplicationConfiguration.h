// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUPNEXTCOMPLICATIONCONFIGURATION_H
#define NTKUPNEXTCOMPLICATIONCONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NTKUpNextComplicationConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger family; // ivar: _family


+(BOOL)supportsSecureCoding;
+(id)bezelConfigurationWithMaskImage:(id)arg0 radius:(CGFloat)arg1 ;
+(id)graphicRectangularConfiguration;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif