// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CESRSAMPLINGDIMENSION_H
#define CESRSAMPLINGDIMENSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CESRSamplingDimension : NSObject

@property (readonly, copy, nonatomic) NSString *asrLocale; // ivar: _asrLocale


-(BOOL)matches:(id)arg0 ;
-(id)description;
-(id)initWithAsrLocale:(id)arg0 ;


@end


#endif