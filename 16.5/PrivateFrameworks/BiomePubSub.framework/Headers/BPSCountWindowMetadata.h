// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSCOUNTWINDOWMETADATA_H
#define BPSCOUNTWINDOWMETADATA_H

@protocol BPSWindowMetadata;

#import <Foundation/Foundation.h>


@interface BPSCountWindowMetadata : NSObject <BPSWindowMetadata>



@property (readonly, nonatomic) NSUInteger currentCount; // ivar: _currentCount


+(id)new;
-(id)init;
-(id)initWithCurrentCount:(NSUInteger)arg0 ;


@end


#endif