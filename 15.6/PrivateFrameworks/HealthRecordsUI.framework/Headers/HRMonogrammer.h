// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRMONOGRAMMER_H
#define HRMONOGRAMMER_H

@class CNMonogrammer;

#import <Foundation/Foundation.h>


@interface HRMonogrammer : NSObject

@property (retain, nonatomic) CNMonogrammer *monogrammer; // ivar: _monogrammer


-(id)initWithDiameter:(CGFloat)arg0 ;
-(id)makeImageForTitle:(id)arg0 ;


@end


#endif