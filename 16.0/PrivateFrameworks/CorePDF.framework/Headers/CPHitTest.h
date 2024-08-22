// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPHITTEST_H
#define CPHITTEST_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "CPPage.h"

@interface CPHitTest : NSObject {
    CPPage *page;
    NSMutableArray *objectsOnPage;
    float mapTemp;
}




-(BOOL)hitTestGraphicObject:(id)arg0 point:(struct CGPoint )arg1 ;
-(BOOL)hitTestParagraph:(id)arg0 point:(struct CGPoint )arg1 ;
-(NSInteger)compareByReadingOrder:(struct CGPoint )arg0 to:(struct CGPoint )arg1 ;
-(id)column:(struct CGPoint )arg0 ;
-(id)findBestMatch:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(id)findObjectIn:(id)arg0 at:(struct CGPoint )arg1 count:(*int)arg2 ;
-(id)initWithPage:(id)arg0 ;
-(id)layoutArea:(struct CGPoint )arg0 ;
-(id)objectAtPoint:(struct CGPoint )arg0 ;
-(id)page;
-(id)paragraph:(struct CGPoint )arg0 ;
-(id)paragraphNear:(struct CGPoint )arg0 ;
-(id)textLine:(struct CGPoint )arg0 ;
-(unsigned int)columnsAt:(struct CGPoint )arg0 ;
-(void)dealloc;
-(void)findClickableObjects:(BOOL)arg0 ;


@end


#endif