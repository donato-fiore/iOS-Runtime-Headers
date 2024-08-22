// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKDECORATEDPLAYBACKSUMMARY_H
#define WLKDECORATEDPLAYBACKSUMMARY_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WLKPlaybackSummary.h"

@interface WLKDecoratedPlaybackSummary : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (readonly, nonatomic) WLKPlaybackSummary *summary; // ivar: _summary


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSummary:(id)arg0 canonicalID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif