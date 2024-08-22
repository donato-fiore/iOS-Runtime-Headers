// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LEGACYTILEHOSTLAYER_H
#define LEGACYTILEHOSTLAYER_H

@class CALayer;



@interface LegacyTileHostLayer : CALayer {
    *void _tileGrid;
}




-(id)actionForKey:(id)arg0 ;
-(id)initWithTileGrid:(*void)arg0 ;
-(void)renderInContext:(struct CGContext *)arg0 ;


@end


#endif