// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKMODELCONTROLLER_H
#define AKMODELCONTROLLER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AKSparseMutableControllerArray.h"

@interface AKModelController : NSObject {
    AKSparseMutableControllerArray *_mutablePageModelControllers;
}


@property (readonly) NSArray *pageModelControllers;


-(BOOL)populateFromArchivedPageModelControllers:(id)arg0 ;
-(id)allSelectedAnnotations;
-(id)archivedPageModelControllers;
-(id)init;
-(id)pageModelControllerForAnnotation:(id)arg0 ;
-(id)pageModelControllerForPage:(NSUInteger)arg0 ;
-(void)deleteAllSelectedAnnotations;
-(void)deselectAllAnnotations;
-(void)insertObject:(id)arg0 inPageModelControllersAtIndex:(NSUInteger)arg1 ;
-(void)insertPageModelControllers:(id)arg0 atIndexes:(id)arg1 ;
-(void)removeObjectFromPageModelControllersAtIndex:(NSUInteger)arg0 ;
-(void)removePageModelControllersAtIndexes:(id)arg0 ;
-(void)replaceObjectInPageModelControllersAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)replacePageModelControllersAtIndexes:(id)arg0 withPageModelControllers:(id)arg1 ;


@end


#endif