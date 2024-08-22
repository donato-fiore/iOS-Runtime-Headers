// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPOWERASSERTION_H
#define GEOPOWERASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface GEOPowerAssertion : NSObject {
    NSString *_identifier;
    CGFloat _timeout;
    unsigned int _assertion;
    NSInteger _type;
}




-(id)description;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 timeout:(CGFloat)arg2 ;
-(void)dealloc;


@end


#endif