// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXTIMEHISTOGRAM_H
#define _ATXTIMEHISTOGRAM_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _ATXTimeHistogram : NSObject <NSSecureCoding>

 {
    unsigned int _count;
    *? _entries;
    unsigned short _bucketCount;
}


@property (readonly, nonatomic) BOOL applyFilter; // ivar: _applyFilter
@property (readonly, nonatomic) unsigned short pointsPerTimeInterval;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerate:(id)arg0 ;


@end


#endif