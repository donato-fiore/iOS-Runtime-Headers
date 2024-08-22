// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDSTORY_H
#define WDSTORY_H


#import <Foundation/Foundation.h>

#import "OADDrawable.h"

@interface WDStory : NSObject {
    OADDrawable *mHead;
    BOOL mOle;
}




-(BOOL)isOle;
-(id)head;
-(id)initWithHead:(id)arg0 ;
-(id)text;
-(void)setOle:(BOOL)arg0 ;


@end


#endif