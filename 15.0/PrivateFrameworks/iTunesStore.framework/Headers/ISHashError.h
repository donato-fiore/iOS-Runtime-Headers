// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISHASHERROR_H
#define ISHASHERROR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ISHashError : NSObject <NSCopying>



@property (copy, nonatomic) NSString *actualHashString; // ivar: _actualHashString
@property (copy, nonatomic) NSString *expectedHashString; // ivar: _expectedHashString
@property (readonly, nonatomic) NSString *hashFailureHeaderString;
@property (nonatomic) NSInteger rangeEnd; // ivar: _rangeEnd
@property (nonatomic) NSInteger rangeStart; // ivar: _rangeStart


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif