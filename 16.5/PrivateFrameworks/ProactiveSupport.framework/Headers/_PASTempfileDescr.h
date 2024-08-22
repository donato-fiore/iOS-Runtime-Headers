// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASTEMPFILEDESCR_H
#define _PASTEMPFILEDESCR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _PASTempfileDescr : NSObject <NSCopying>



@property (readonly, nonatomic) int fd; // ivar: _fd
@property (readonly, nonatomic) NSString *path; // ivar: _path


+(id)tempfileDescrWithFd:(int)arg0 path:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTempfileDescr:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithFd:(int)arg0 path:(id)arg1 ;


@end


#endif