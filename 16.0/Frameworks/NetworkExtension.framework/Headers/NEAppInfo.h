// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEAPPINFO_H
#define NEAPPINFO_H

@class NSUUID, NSString, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEAppInfo : NSObject <NSSecureCoding, NSCopying>

 {
    int _pid;
    NSUUID *_uuid;
    NSString *_bundleID;
    NSString *_appVersion;
    NSData *_cdHash;
}




+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif