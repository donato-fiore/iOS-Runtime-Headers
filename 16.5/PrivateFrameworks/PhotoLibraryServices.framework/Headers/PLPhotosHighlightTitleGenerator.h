// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPHOTOSHIGHLIGHTTITLEGENERATOR_H
#define PLPHOTOSHIGHLIGHTTITLEGENERATOR_H

@class NSString;
@protocol PLPhotosHighlightTitleGeneratorProtocol;

#import <Foundation/Foundation.h>


@interface PLPhotosHighlightTitleGenerator : NSObject <PLPhotosHighlightTitleGeneratorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canUseSharingComposition:(short)arg0 forPhotosHighlightFilter:(unsigned short)arg1 ;
+(id)titleForHighlight:(id)arg0 filter:(unsigned short)arg1 dateRangeTitleGenerator:(id)arg2 options:(NSUInteger)arg3 ;


@end


#endif