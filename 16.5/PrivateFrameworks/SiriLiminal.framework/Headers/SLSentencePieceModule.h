// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLSENTENCEPIECEMODULE_H
#define SLSENTENCEPIECEMODULE_H

@class NSString, EARSentencePieceModule;
@protocol SLODLDTokenizerComponent;

#import <Foundation/Foundation.h>


@interface SLSentencePieceModule : NSObject <SLODLDTokenizerComponent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) EARSentencePieceModule *processor; // ivar: _processor
@property (readonly) Class superclass;


-(NSInteger)setSPMEncoderOptions:(id)arg0 ;
-(id)encodeUtterance:(id)arg0 ;
-(id)initWithConfigFile:(id)arg0 ;
-(void)dealloc;


@end


#endif