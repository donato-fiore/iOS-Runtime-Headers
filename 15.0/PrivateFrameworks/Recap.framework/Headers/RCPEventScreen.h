// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCPEVENTSCREEN_H
#define RCPEVENTSCREEN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface RCPEventScreen : NSObject

@property (copy, nonatomic) NSString *displayUUID; // ivar: _displayUUID
@property (nonatomic) CGSize pointSize; // ivar: _pointSize
@property (nonatomic) CGFloat scale; // ivar: _scale


-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif