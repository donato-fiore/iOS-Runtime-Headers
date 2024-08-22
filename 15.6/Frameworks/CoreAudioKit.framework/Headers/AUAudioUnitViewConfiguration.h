// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUAUDIOUNITVIEWCONFIGURATION_H
#define AUAUDIOUNITVIEWCONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AUAudioUnitViewConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat height; // ivar: _height
@property (readonly, nonatomic) BOOL hostHasController; // ivar: _hostHasController
@property (readonly, nonatomic) CGFloat width; // ivar: _width


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWidth:(CGFloat)arg0 height:(CGFloat)arg1 hostHasController:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif