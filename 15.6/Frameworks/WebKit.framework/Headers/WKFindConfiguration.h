// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKFINDCONFIGURATION_H
#define WKFINDCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WKFindConfiguration : NSObject <NSCopying>



@property (nonatomic) BOOL backwards; // ivar: _backwards
@property (nonatomic) BOOL caseSensitive; // ivar: _caseSensitive
@property (nonatomic) BOOL wraps; // ivar: _wraps


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif