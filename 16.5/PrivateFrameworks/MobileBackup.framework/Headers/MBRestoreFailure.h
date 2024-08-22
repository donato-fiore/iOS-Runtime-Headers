// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MBRESTOREFAILURE_H
#define MBRESTOREFAILURE_H

@class NSString, NSError, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MBRestoreFailure : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *assetType; // ivar: _assetType
@property (copy, nonatomic) NSString *dataclass; // ivar: _dataclass
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSData *icon; // ivar: _icon
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 dataclass:(id)arg1 assetType:(id)arg2 displayName:(id)arg3 error:(id)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif