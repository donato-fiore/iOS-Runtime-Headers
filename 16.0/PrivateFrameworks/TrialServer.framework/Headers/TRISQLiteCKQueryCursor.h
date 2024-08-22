// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRISQLITECKQUERYCURSOR_H
#define TRISQLITECKQUERYCURSOR_H

@class CKQuery;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRISQLiteCKQueryCursor : NSObject <NSCopying>



@property (nonatomic) NSUInteger offset; // ivar: _offset
@property (retain, nonatomic) CKQuery *query; // ivar: _query


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif