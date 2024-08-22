// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PADFRAME_H
#define PADFRAME_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PADFrame : NSObject {
    id *_buffer;
}


@property (nonatomic) *__CVBuffer buffer;
@property (retain, nonatomic) NSArray *faces; // ivar: _faces
@property (nonatomic) unsigned int orientation; // ivar: _orientation
@property (readonly, nonatomic) CGSize size;
@property (nonatomic) ? time; // ivar: _time
@property (readonly, nonatomic) CGFloat timestamp;


+(id)cvPixelBufferFromData:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif