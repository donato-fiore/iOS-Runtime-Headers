// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CFXEXPORTCLIPDATASOURCE_H
#define CFXEXPORTCLIPDATASOURCE_H

@class NSString;
@protocol JFXCompositionPlayableElementsDataSource;

#import <Foundation/Foundation.h>

#import "CFXClip.h"

@interface CFXExportClipDataSource : NSObject <JFXCompositionPlayableElementsDataSource>



@property (retain, nonatomic) CFXClip *clip; // ivar: _clip
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isExporting;
-(BOOL)screenCanShow2160P;
-(BOOL)use2160Pcontent:(BOOL)arg0 ;
-(CGFloat)imageScale;
-(NSInteger)count;
-(id)colorSpace;
-(id)initWithClip:(id)arg0 ;
-(id)playableElementAtIndex:(NSInteger)arg0 ;
-(int)duration;
-(int)frameRate;
-(int)timeScale;
-(struct CGSize )frameSize;
-(struct CGSize )renderSize;


@end


#endif