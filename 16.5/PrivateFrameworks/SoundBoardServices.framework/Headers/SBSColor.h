// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCOLOR_H
#define SBSCOLOR_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBSColor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) float blueComponent; // ivar: _blueComponent
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) float greenComponent; // ivar: _greenComponent
@property (readonly, nonatomic) float redComponent; // ivar: _redComponent


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif