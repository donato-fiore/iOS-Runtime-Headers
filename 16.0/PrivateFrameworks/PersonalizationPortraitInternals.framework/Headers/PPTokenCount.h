// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTOKENCOUNT_H
#define PPTOKENCOUNT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PPTokenCount : NSObject

@property (nonatomic) unsigned int count; // ivar: _count
@property (retain, nonatomic) NSString *token; // ivar: _token


-(id)initWithToken:(id)arg0 count:(unsigned int)arg1 ;


@end


#endif