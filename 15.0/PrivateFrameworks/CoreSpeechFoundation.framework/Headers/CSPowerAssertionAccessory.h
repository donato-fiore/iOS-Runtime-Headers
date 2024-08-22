// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSPOWERASSERTIONACCESSORY_H
#define CSPOWERASSERTIONACCESSORY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CSPowerAssertionAccessory : NSObject {
    unsigned int _assertionID;
    NSString *_name;
}




-(id)initWithName:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif