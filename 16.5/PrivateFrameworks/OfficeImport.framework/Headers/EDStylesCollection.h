// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDSTYLESCOLLECTION_H
#define EDSTYLESCOLLECTION_H



#import "EDCollection.h"

@interface EDStylesCollection : EDCollection {
    NSUInteger mDefaultWorkbookStyleIndex;
}




-(NSUInteger)addObject:(id)arg0 ;
-(NSUInteger)defaultWorkbookStyleIndex;
-(id)defaultWorkbookStyle;
-(id)init;
-(void)removeAllObjects;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)setDefaultWorkbookStyleIndex:(NSUInteger)arg0 ;


@end


#endif