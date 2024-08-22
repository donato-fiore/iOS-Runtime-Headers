// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVSPANMATCHRESULT_H
#define KVSPANMATCHRESULT_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "KVItemInfo.h"
#import "KVSpanInfo.h"

@interface KVSpanMatchResult : NSObject <NSCopying>

 {
    KVItemInfo *_itemInfo;
    KVSpanInfo *_spanInfo;
    NSArray *_fieldMatches;
    float _score;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSpanMatchResult:(id)arg0 ;
-(NSUInteger)hash;
-(float)score;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fieldMatches;
-(id)init;
-(id)initWithItemInfo:(id)arg0 spanInfo:(id)arg1 fieldMatches:(id)arg2 ;
-(id)initWithItemInfo:(id)arg0 spanInfo:(id)arg1 fieldMatches:(id)arg2 score:(float)arg3 ;
-(id)itemInfo;
-(id)spanInfo;
-(id)spanValue;
-(void)setScore:(float)arg0 ;


@end


#endif