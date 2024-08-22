// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CARSTREAMINFO_H
#define CARSTREAMINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CARStreamInfo : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) CGPoint origin; // ivar: _origin
@property (readonly, nonatomic) NSInteger zIndex; // ivar: _zIndex


-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithStreamInfoDictionary:(id)arg0 ;


@end


#endif