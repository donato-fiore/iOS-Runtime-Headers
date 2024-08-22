// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAFLIPBOOKFRAME_H
#define CAFLIPBOOKFRAME_H


#import <Foundation/Foundation.h>


@interface CAFlipBookFrame : NSObject {
    NSUInteger _presentationTime;
    NSUInteger _frameId;
    unsigned int _generation;
    id *_userInfo;
}


@property (readonly, nonatomic) NSUInteger frameId;
@property (readonly, nonatomic) NSUInteger presentationTime;
@property (readonly, nonatomic) id *userInfo;


-(id)_initWithPresentationTime:(NSUInteger)arg0 frameId:(NSUInteger)arg1 generation:(unsigned int)arg2 userInfo:(id)arg3 ;
-(id)description;
-(unsigned int)generation;
-(void)dealloc;


@end


#endif