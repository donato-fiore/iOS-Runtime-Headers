// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCACHESCOREITEM_H
#define PKCACHESCOREITEM_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKCacheScoreItem : NSObject <NSSecureCoding>

 {
    NSDate *_insertDate;
}




+(BOOL)supportsSecureCoding;
-(BOOL)hasExpired;
-(BOOL)isNewerThan:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif