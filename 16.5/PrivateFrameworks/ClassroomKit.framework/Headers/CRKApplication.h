// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKAPPLICATION_H
#define CRKAPPLICATION_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRKApplication : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *badgeIconData; // ivar: _badgeIconData
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSData *iconData; // ivar: _iconData
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *shortVersionString; // ivar: _shortVersionString


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif