// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TNPAGEREPCONTAINER_H
#define TNPAGEREPCONTAINER_H

@class TSWPPageRep;



@interface TNPageRepContainer : TSWPPageRep {
    CGRect _shadowPathRect;
    *CGPath _shadowPath;
}




-(BOOL)directlyManagesLayerContent;
-(BOOL)isOpaque;
-(BOOL)masksToBounds;
-(BOOL)shouldBeginScribbleAtPoint:(struct CGPoint )arg0 ;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif