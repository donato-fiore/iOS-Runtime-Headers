// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFQOSMETER_H
#define PFQOSMETER_H


#import <Foundation/Foundation.h>


@interface PFQOSMeter : NSObject {
    uint8_t _counts;
    uint8_t _total;
}




-(BOOL)log:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(void)recordQOS;


@end


#endif