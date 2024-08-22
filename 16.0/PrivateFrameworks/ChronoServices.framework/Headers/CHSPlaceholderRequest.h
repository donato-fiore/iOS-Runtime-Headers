// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSPLACEHOLDERREQUEST_H
#define CHSPLACEHOLDERREQUEST_H

@class NSFileHandle;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CHSWidgetMetrics.h"

@interface CHSPlaceholderRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger family; // ivar: _family
@property (readonly, nonatomic) NSFileHandle *fileHandle; // ivar: _fileHandle
@property (readonly, nonatomic) CHSWidgetMetrics *metrics; // ivar: _metrics


+(BOOL)supportsSecureCoding;
+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetrics:(id)arg0 family:(NSInteger)arg1 fileHandle:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif