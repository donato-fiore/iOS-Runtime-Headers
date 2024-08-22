// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSMAIN_H
#define PSMAIN_H


#import <Foundation/Foundation.h>


@interface PSMain : NSObject



-(BOOL)canAddEmitterToDoc:(*void)arg0 ;
-(BOOL)validateAction:(SEL)arg0 ;
-(id)init;
-(void)addEmitter:(id)arg0 ;
-(void)addReplicator:(id)arg0 ;
-(void)applicationDidFinishLaunching;
-(void)setupEmitter:(*void)arg0 inDoc:(*void)arg1 ;


@end


#endif