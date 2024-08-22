// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPRINSTALLDATA_H
#define SPRINSTALLDATA_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPRInstallData : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *kernelsInstalled; // ivar: _kernelsInstalled


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKernelsInstalled:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif