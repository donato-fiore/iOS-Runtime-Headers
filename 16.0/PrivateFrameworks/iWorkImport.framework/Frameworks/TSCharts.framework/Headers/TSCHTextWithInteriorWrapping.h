// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHTEXTWITHINTERIORWRAPPING_H
#define TSCHTEXTWITHINTERIORWRAPPING_H

@class TSWPText, TSDWrapSegments;



@interface TSCHTextWithInteriorWrapping : TSWPText {
    TSDWrapSegments *_cachedInteriorWrapSegments;
}




-(BOOL)shrinkTextToFit;
-(id)interiorWrapPath;
-(id)interiorWrapSegments;
-(id)textWrapper;
-(int)verticalAlignment;


@end


#endif