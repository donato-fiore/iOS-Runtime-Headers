// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LSREGISTRATIONINFO_H
#define LSREGISTRATIONINFO_H

@protocol NSSecureCoding, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface LSRegistrationInfo : NSObject <NSSecureCoding, NSMutableCopying>

 {
    unsigned int version;
    unsigned int action;
    unsigned int options;
    unsigned int itemFlags;
    unsigned int containerUnit;
    unsigned int bundleUnit;
    unsigned int bundleClass;
    NSUInteger inoBundle;
    NSUInteger inoExec;
    CGFloat contentModDate;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif