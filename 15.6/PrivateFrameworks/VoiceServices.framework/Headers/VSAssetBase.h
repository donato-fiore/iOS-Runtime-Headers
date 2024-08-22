// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSASSETBASE_H
#define VSASSETBASE_H

@class NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VSAssetBase : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSNumber *compatibilityVersion; // ivar: _compatibilityVersion
@property (copy, nonatomic) NSNumber *contentVersion; // ivar: _contentVersion
@property (copy, nonatomic) NSNumber *downloadSize; // ivar: _downloadSize
@property (nonatomic) BOOL isPurgeable; // ivar: _isPurgeable
@property (copy, nonatomic) NSString *masteredVersion; // ivar: _masteredVersion
@property (nonatomic) NSInteger storage; // ivar: _storage


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif