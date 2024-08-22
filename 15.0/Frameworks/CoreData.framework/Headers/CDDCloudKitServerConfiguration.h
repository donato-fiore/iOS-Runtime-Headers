// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDDCLOUDKITSERVERCONFIGURATION_H
#define CDDCLOUDKITSERVERCONFIGURATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CDDCloudKitServerConfiguration : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_storeDirectoryPath;
    NSString *_machServiceName;
}




+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif