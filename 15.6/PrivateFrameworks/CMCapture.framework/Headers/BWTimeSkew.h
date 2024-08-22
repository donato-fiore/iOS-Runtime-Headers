// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWTIMESKEW_H
#define BWTIMESKEW_H


#import <Foundation/Foundation.h>


@interface BWTimeSkew : NSObject

@property (nonatomic) ? adjusted; // ivar: _adjusted
@property (readonly, nonatomic) BOOL isBracketFrame; // ivar: _isBracketFrame
@property (readonly, nonatomic) BOOL isSISFrame; // ivar: _isSISFrame
@property (nonatomic) BOOL isStartOfDiscontinuity; // ivar: _isStartOfDiscontinuity
@property (readonly, nonatomic) ? native; // ivar: _native
@property (readonly, nonatomic) ? original; // ivar: _original


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithNativeTime:(struct ? )arg0 originalTime:(struct ? )arg1 isBracketFrame:(BOOL)arg2 isSISFrame:(BOOL)arg3 ;


@end


#endif