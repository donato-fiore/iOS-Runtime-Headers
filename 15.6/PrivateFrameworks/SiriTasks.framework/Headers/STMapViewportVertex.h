// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STMAPVIEWPORTVERTEX_H
#define STMAPVIEWPORTVERTEX_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STMapViewportVertex : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat longitude; // ivar: _longitude


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif