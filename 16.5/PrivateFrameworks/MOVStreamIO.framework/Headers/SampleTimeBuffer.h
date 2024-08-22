// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMPLETIMEBUFFER_H
#define SAMPLETIMEBUFFER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SampleTimeBuffer : NSObject {
    vector<CMTime, std::allocator<CMTime>> _times;
}


@property (copy, nonatomic) NSString *name; // ivar: _name


-(BOOL)isEmpty;
-(id)description;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)timeline;
-(void)appendTime:(struct ? )arg0 ;


@end


#endif