// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOMPOSEDROUTELANEDIRECTIONINFO_H
#define GEOCOMPOSEDROUTELANEDIRECTIONINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOComposedRouteLaneDirectionInfo : NSObject <NSSecureCoding>

 {
    int _direction;
    float _angle;
}


@property (readonly, nonatomic) float angle;
@property (readonly, nonatomic) int direction;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLaneArrowHead:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif