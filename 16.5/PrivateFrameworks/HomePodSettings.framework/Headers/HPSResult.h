// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSRESULT_H
#define HPSRESULT_H

@class NSUUID, NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HPSSetting.h"

@interface HPSResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUUID *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL isSuccess; // ivar: _isSuccess
@property (readonly, nonatomic) HPSSetting *setting; // ivar: _setting


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSetting:(id)arg0 accessoryIdentifier:(id)arg1 error:(id)arg2 result:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif