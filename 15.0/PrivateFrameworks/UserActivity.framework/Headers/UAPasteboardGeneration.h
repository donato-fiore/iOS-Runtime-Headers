// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UAPASTEBOARDGENERATION_H
#define UAPASTEBOARDGENERATION_H

@class NSSet, NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface UAPasteboardGeneration : NSObject

@property (copy) NSSet *allTypes; // ivar: _allTypes
@property (readonly) NSUInteger generation; // ivar: _generation
@property (copy) NSArray *items; // ivar: _items
@property (retain) NSMutableDictionary *typePaths; // ivar: _typePaths


-(BOOL)addItem:(id)arg0 ;
-(BOOL)addType:(id)arg0 toItemAtIndex:(NSUInteger)arg1 ;
-(id)getTypePaths;
-(id)initWithGeneration:(NSUInteger)arg0 ;
-(void)fetchTypeURL:(id)arg0 ;


@end


#endif