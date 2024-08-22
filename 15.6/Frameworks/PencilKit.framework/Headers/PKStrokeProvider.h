// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSTROKEPROVIDER_H
#define PKSTROKEPROVIDER_H

@class NSMutableOrderedSet, NSArray, NSMutableDictionary, NSString, NSOrderedSet;
@protocol CHStrokeProvider, CHStrokeProviderVersion;

#import <Foundation/Foundation.h>

#import "PKDrawing.h"

@interface PKStrokeProvider : NSObject <CHStrokeProvider>

 {
    BOOL _disabled;
    NSMutableOrderedSet *_strokeSlices;
    BOOL _shouldProcessVisibleStrokes;
    NSArray *_visibleOnscreenStrokes;
    NSMutableDictionary *_strokeIdsByEncoding;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKDrawing *drawing; // ivar: _drawing
@property (readonly) CGSize drawingCanvasSize;
@property (readonly) NSInteger groupingPriority; // ivar: groupingPriority
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *orderedStrokes;
@property (readonly) NSObject<CHStrokeProviderVersion> *strokeProviderVersion;
@property (readonly) Class superclass;
@property (readonly, copy) NSOrderedSet *visibleStrokeEncodedIdentifiers;


+(id)_identifiersForStrokes:(id)arg0 ;
+(id)slicesForStrokes:(id)arg0 ;
-(BOOL)enumerateChangesSinceVersion:(id)arg0 usingBlock:(id)arg1 ;
-(BOOL)isStroke:(id)arg0 versionOfStrokeWithIdentifier:(id)arg1 ;
-(NSInteger)compareOrderOfStroke:(id)arg0 toStroke:(id)arg1 ;
-(NSInteger)compareOrderOfStrokeWithIdentifier:(id)arg0 toStrokeWithIdentifier:(id)arg1 ;
-(NSUInteger)compareStyleOfStrokeWithIdentifier:(id)arg0 toStrokeWithIdentifier:(id)arg1 ;
-(id)_cachedStrokeIdentifier:(id)arg0 ;
-(id)encodedStrokeIdentifier:(id)arg0 ;
-(id)initWithDrawing:(id)arg0 ;
-(id)initWithDrawing:(id)arg0 visibleOnscreenStrokes:(id)arg1 shouldProcessVisibleStrokes:(BOOL)arg2 ;
-(id)sliceForIdentifier:(id)arg0 ;
-(id)slices;
-(id)strokeForIdentifier:(id)arg0 ;
-(id)strokeIdentifierFromData:(id)arg0 ;
-(void)_cacheStrokeIdentifier:(id)arg0 withEncodedStrokeIdentifier:(id)arg1 ;


@end


#endif