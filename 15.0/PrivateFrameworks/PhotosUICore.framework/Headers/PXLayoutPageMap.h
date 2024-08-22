// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXLAYOUTPAGEMAP_H
#define PXLAYOUTPAGEMAP_H

@class NSMapTable, NSArray;

#import <Foundation/Foundation.h>


@interface PXLayoutPageMap : NSObject {
    NSMapTable *_pageMap;
    NSArray *_sources;
    CGRect _contentRect;
}




-(id)_screenPageForPoint:(struct CGPoint )arg0 ;
-(id)description;
-(id)initWithSources:(id)arg0 contentRect:(struct CGRect )arg1 ;
-(id)sourcesFromRect:(struct CGRect )arg0 ;
-(void)_mapSources:(id)arg0 ;


@end


#endif