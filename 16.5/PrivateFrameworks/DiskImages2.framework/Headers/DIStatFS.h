// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DISTATFS_H
#define DISTATFS_H

@class NSString, NSURL;
@protocol NSSecureCoding, NSCoding;

#import <Foundation/Foundation.h>


@interface DIStatFS : NSObject <NSSecureCoding, NSCoding>



@property (readonly, nonatomic) NSUInteger blockSize; // ivar: _blockSize
@property (readonly, copy, nonatomic) NSString *mountedFrom; // ivar: _mountedFrom
@property (readonly, copy, nonatomic) NSURL *mountedOnURL; // ivar: _mountedOnURL


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileDescriptor:(int)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)logWithHeader:(id)arg0 ;


@end


#endif