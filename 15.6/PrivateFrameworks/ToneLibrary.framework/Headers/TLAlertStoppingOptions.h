// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLALERTSTOPPINGOPTIONS_H
#define TLALERTSTOPPINGOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TLAlertStoppingOptions : NSObject <NSCopying>



@property (nonatomic) CGFloat fadeOutDuration; // ivar: _fadeOutDuration
@property (nonatomic) BOOL shouldWaitUntilEndOfCurrentRepetition; // ivar: _shouldWaitUntilEndOfCurrentRepetition


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif