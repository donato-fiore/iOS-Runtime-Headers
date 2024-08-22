// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQMEDIACLOUDSTORAGE_H
#define ICQMEDIACLOUDSTORAGE_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICQMediaCloudStorage : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *displayColor; // ivar: _displayColor
@property (copy, nonatomic) NSString *displayColorDark; // ivar: _displayColorDark
@property (copy, nonatomic) NSString *displayLabel; // ivar: _displayLabel
@property (copy, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (retain, nonatomic) NSNumber *storageUsed; // ivar: _storageUsed


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif