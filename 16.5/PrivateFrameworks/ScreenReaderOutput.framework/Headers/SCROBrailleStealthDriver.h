// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCROBRAILLESTEALTHDRIVER_H
#define SCROBRAILLESTEALTHDRIVER_H

@class NSString;
@protocol SCROBrailleDriverProtocol;

#import <Foundation/Foundation.h>


@interface SCROBrailleStealthDriver : NSObject <SCROBrailleDriverProtocol>

 {
    BOOL _isDriverLoaded;
    NSString *_modelIdentifier;
    NSInteger _mainSize;
    NSInteger _statusSize;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDriverLoaded;
-(BOOL)isInputEnabled;
-(BOOL)isSleeping;
-(BOOL)postsKeyboardEvents;
-(BOOL)setMainCells:(char *)arg0 length:(NSInteger)arg1 ;
-(BOOL)setStatusCells:(char *)arg0 length:(NSInteger)arg1 ;
-(BOOL)supportsBlinkingCursor;
-(BOOL)unloadDriver;
-(NSInteger)mainSize;
-(NSInteger)statusSize;
-(NSUInteger)interfaceVersion;
-(id)getInputEvents;
-(id)init;
-(id)modelIdentifier;
-(int)brailleInputMode;
-(int)loadDriverWithIOElement:(id)arg0 ;
-(void)dealloc;


@end


#endif