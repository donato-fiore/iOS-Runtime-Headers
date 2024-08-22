// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMFMAPCACHEIMAGE_H
#define FMFMAPCACHEIMAGE_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMFMapCacheImage : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger count; // ivar: _count
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(void)boostPriority;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif