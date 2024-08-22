// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTZOOMCONTROLLER_H
#define TTZOOMCONTROLLER_H


#import <Foundation/Foundation.h>


@interface TTZoomController : NSObject

@property (nonatomic) CGFloat checklistZoomFactor; // ivar: _checklistZoomFactor
@property (nonatomic) CGFloat zoomFactor; // ivar: _zoomFactor


-(id)init;
-(id)reallyZoomAttributedString:(id)arg0 zoomDirection:(BOOL)arg1 ;
-(id)reallyZoomAttributes:(id)arg0 zoomDirection:(BOOL)arg1 ;
-(id)reallyZoomFontInAttributes:(id)arg0 zoomDirection:(BOOL)arg1 ;
-(id)unzoomAttributedString:(id)arg0 ;
-(id)unzoomAttributes:(id)arg0 ;
-(id)unzoomFont:(id)arg0 ;
-(id)unzoomFontInAttributes:(id)arg0 ;
-(id)zoomAttributedString:(id)arg0 ;
-(id)zoomAttributes:(id)arg0 ;
-(id)zoomFont:(id)arg0 ;
-(id)zoomFontInAttributes:(id)arg0 ;


@end


#endif