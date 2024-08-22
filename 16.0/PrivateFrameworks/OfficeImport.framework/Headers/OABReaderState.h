// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OABREADERSTATE_H
#define OABREADERSTATE_H

@class NSMutableDictionary, NSMutableArray;
@protocol OADColorPalette;

#import <Foundation/Foundation.h>

#import "ESDContainer.h"

@interface OABReaderState : NSObject {
    Class mClient;
    NSMutableDictionary *mShapeIdMap;
    NSMutableDictionary *mEshContentIdMap;
    id<OADColorPalette> *mColorPalette;
    NSMutableArray *mGroupStack;
}


@property (retain, nonatomic) ESDContainer *bstoreContainerHolder; // ivar: mBstoreContainerHolder


-(BOOL)isInsideGroup;
-(BOOL)useXmlBlobs;
-(Class)client;
-(id)colorPalette;
-(id)contentObjectForId:(int)arg0 ;
-(id)drawableForShapeId:(int)arg0 ;
-(id)groupStackReference;
-(id)init;
-(id)initWithClient:(Class)arg0 ;
-(id)peekGroup;
-(id)popGroup;
-(id)xmlDrawingState;
-(int)groupDepth;
-(void)pushGroup:(id)arg0 ;
-(void)resetForNewDrawing;
-(void)setColorPalette:(id)arg0 ;
-(void)setContentObject:(id)arg0 forId:(int)arg1 ;
-(void)setDrawable:(id)arg0 forShapeId:(unsigned int)arg1 ;


@end


#endif