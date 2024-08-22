// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CASDEVICE_H
#define CASDEVICE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CASDevice : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
+(id)currentDevice;
-(id)_initCurrentDevice;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif