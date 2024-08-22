// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTSASSETBASE_H
#define TTSASSETBASE_H

@class NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TTSAssetBase : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSNumber *compatibilityVersion; // ivar: _compatibilityVersion
@property (copy, nonatomic) NSNumber *contentVersion; // ivar: _contentVersion
@property (copy, nonatomic) NSString *masteredVersion; // ivar: _masteredVersion


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif