// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCSKEYBAGKEY_H
#define PCSKEYBAGKEY_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PCSKeybagKey : NSObject <NSSecureCoding>



@property (retain) NSData *data; // ivar: _data
@property NSInteger flags; // ivar: _flags


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif