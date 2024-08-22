// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSHTTPALTERNATIVESERVICESFILTER_H
#define _NSHTTPALTERNATIVESERVICESFILTER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _NSHTTPAlternativeServicesFilter : NSObject <NSCopying>



@property (retain, nonatomic) NSString *host; // ivar: _host
@property (retain, nonatomic) NSString *partition; // ivar: _partition
@property (nonatomic) NSInteger port; // ivar: _port


+(id)emptyFilter;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif