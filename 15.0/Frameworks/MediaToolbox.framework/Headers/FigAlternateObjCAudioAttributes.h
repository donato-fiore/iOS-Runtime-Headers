// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGALTERNATEOBJCAUDIOATTRIBUTES_H
#define FIGALTERNATEOBJCAUDIOATTRIBUTES_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface FigAlternateObjCAudioAttributes : NSObject {
    *OpaqueFigAlternate _alternate;
    NSArray *_formatIDs;
    *OpaqueFigSimpleMutex _mutex;
}


@property (readonly, nonatomic) NSArray *formatIDs;


-(NSInteger)channelCountForMediaOption:(id)arg0 ;
-(id)initWithFigAlternate:(struct OpaqueFigAlternate *)arg0 ;
-(void)dealloc;


@end


#endif