// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APPMATCHES_H
#define APPMATCHES_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AppMatches : NSObject <NSCopying, NSSecureCoding>

 {
    ? bundleIds;
    ? signals;
}


@property (nonatomic, readonly) NSArray *bundleIds;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger recommendation; // ivar: recommendation


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif