// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GIFBUILDER_H
#define GIFBUILDER_H

@class CIContext, NSDictionary;

#import <Foundation/Foundation.h>


@interface GIFBuilder : NSObject

@property (retain) CIContext *ciCtx; // ivar: _ciCtx
@property (retain) NSDictionary *frameProperties; // ivar: _frameProperties
@property *CGImageDestination imgDest; // ivar: _imgDest
@property CGFloat maxRes; // ivar: _maxRes


+(id)builderWithContext:(id)arg0 forURL:(id)arg1 maxRes:(NSUInteger)arg2 fps:(float)arg3 ;
-(BOOL)addImage:(id)arg0 ;
-(BOOL)finish;
-(id)initWithContext:(id)arg0 forURL:(id)arg1 maxRes:(NSUInteger)arg2 fps:(float)arg3 ;
-(void)dealloc;


@end


#endif