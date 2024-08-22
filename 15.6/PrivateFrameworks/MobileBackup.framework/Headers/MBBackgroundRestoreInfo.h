// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBBACKGROUNDRESTOREINFO_H
#define MBBACKGROUNDRESTOREINFO_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MBBackgroundRestoreInfo : NSObject <NSSecureCoding, NSCopying>

 {
    int dataClassesRemaining;
    NSUInteger bytesRemaining;
    NSArray *failedDomains;
}


@property NSUInteger bytesRemaining; // ivar: _bytesRemaining
@property int dataClassesRemaining; // ivar: _dataClassesRemaining
@property (retain) NSArray *failedDomains; // ivar: _failedDomains


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif