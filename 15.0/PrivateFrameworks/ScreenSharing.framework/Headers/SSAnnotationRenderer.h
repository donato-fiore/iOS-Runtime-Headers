// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSANNOTATIONRENDERER_H
#define SSANNOTATIONRENDERER_H

@class NSString, UIScreen, NSMutableDictionary, AXUIClient;
@protocol AXUIClientDelegate;

#import <Foundation/Foundation.h>


@interface SSAnnotationRenderer : NSObject <AXUIClientDelegate>

 {
    int assistanceState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) UIScreen *mainScreen; // ivar: _mainScreen
@property (retain) NSMutableDictionary *queuedMessage; // ivar: _queuedMessage
@property (readonly) Class superclass;
@property (retain, nonatomic) AXUIClient *uiClient; // ivar: _uiClient


+(id)sharedRenderer;
-(BOOL)hideAllPointers;
-(BOOL)hidePointerForUser:(id)arg0 ;
-(BOOL)showAllPointers;
-(BOOL)showPointerForUser:(id)arg0 location:(struct CGPoint )arg1 ;
-(id)init;
-(struct CGPoint )convertScaledCoordinates:(struct CGPoint )arg0 ;
-(void)dealloc;
-(void)drawPointerWithRect:(struct CGRect )arg0 flags:(unsigned int)arg1 ;
-(void)drawSafeViewSlateWithRect:(struct CGRect )arg0 flags:(unsigned int)arg1 ;
-(void)handleSafeViewAnnotation:(struct CGPoint )arg0 flags:(unsigned int)arg1 orientation:(NSInteger)arg2 ;
-(void)screenDidChange:(id)arg0 ;
-(void)stopAnnotation;


@end


#endif