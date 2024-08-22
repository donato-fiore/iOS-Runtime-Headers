// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKFINDRESULT_H
#define WKFINDRESULT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WKFindResult : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL matchFound; // ivar: _matchFound


-(id)_initWithMatchFound:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif