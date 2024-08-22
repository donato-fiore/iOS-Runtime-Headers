// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MBRESTOREINFO_H
#define MBRESTOREINFO_H

@class NSString, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MBRestoreInfo : NSObject <NSSecureCoding, NSCopying>



@property (readonly) NSString *backupBuildVersion; // ivar: _backupBuildVersion
@property (readonly) NSDate *date; // ivar: _date
@property (readonly) NSString *deviceBuildVersion; // ivar: _deviceBuildVersion
@property (readonly) BOOL wasCloudRestore; // ivar: _wasCloudRestore


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif