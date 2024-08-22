// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSDDETECTIONRESULT_H
#define AXSDDETECTIONRESULT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AXSDTimeStamp.h"

@interface AXSDDetectionResult : NSObject {
    AXSDTimeStamp *_timestamp;
    NSString *_identifier;
    CGFloat _confidence;
}


@property (readonly) CGFloat confidence;
@property (readonly) NSString *debug;
@property (readonly) NSString *identifier;
@property (readonly) AXSDTimeStamp *timestamp;


-(id)initWithResult:(id)arg0 ;
-(id)initWithTimeStamp:(id)arg0 identifier:(id)arg1 confidence:(CGFloat)arg2 ;


@end


#endif