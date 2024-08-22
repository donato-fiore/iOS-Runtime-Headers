// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCOVERART_H
#define FCCOVERART_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface FCCoverArt : NSObject

@property (readonly, nonatomic) NSArray *images; // ivar: _images


-(id)initWithJSONData:(id)arg0 ;
-(id)initWithJSONString:(id)arg0 ;


@end


#endif