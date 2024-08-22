// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSLOGEVENTSTREAMPOSITION_H
#define OSLOGEVENTSTREAMPOSITION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface OSLogEventStreamPosition : NSObject <NSSecureCoding>

 {
    unsigned char _source;
    unsigned char _uuid;
    NSUInteger _ct;
}


@property (readonly) char * UUID;
@property (readonly) NSUInteger continuousTime;
@property (readonly) char * sourceUUID;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSource:(char *)arg0 bootUUID:(char *)arg1 time:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif