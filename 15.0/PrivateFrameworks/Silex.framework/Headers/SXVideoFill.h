// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXVIDEOFILL_H
#define SXVIDEOFILL_H

@class NSString;


#import "SXFill.h"

@interface SXVideoFill : SXFill

@property (readonly, nonatomic) BOOL loop;
@property (readonly, nonatomic) NSString *resourceIdentifier;
@property (readonly, nonatomic) NSString *stillImageIdentifier;


-(BOOL)loopWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif