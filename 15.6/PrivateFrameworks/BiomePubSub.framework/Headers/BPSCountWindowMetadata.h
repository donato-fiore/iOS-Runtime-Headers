// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSCOUNTWINDOWMETADATA_H
#define BPSCOUNTWINDOWMETADATA_H

@protocol BPSWindowMetadata;

#import <Foundation/Foundation.h>


@interface BPSCountWindowMetadata : NSObject <BPSWindowMetadata>



@property (readonly, nonatomic) NSUInteger currentCount; // ivar: _currentCount


-(id)init;
-(id)initWithCurrentCount:(NSUInteger)arg0 ;


@end


#endif