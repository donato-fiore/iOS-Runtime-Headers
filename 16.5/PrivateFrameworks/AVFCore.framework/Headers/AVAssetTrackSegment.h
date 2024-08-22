// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETTRACKSEGMENT_H
#define AVASSETTRACKSEGMENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVAssetTrackSegment : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) ? timeMapping; // ivar: _timeMapping


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithTimeMapping:(struct ? )arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif