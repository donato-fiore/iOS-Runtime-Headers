// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRLTSTRANSLATOR_H
#define BRLTSTRANSLATOR_H

@class NSBundle;
@protocol BRLTTranslatorProtocol;

#import <Foundation/Foundation.h>


@interface BRLTSTranslator : NSObject

@property (readonly, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (readonly, nonatomic) NSObject<BRLTTranslatorProtocol> *translator; // ivar: _translator


-(id)brailleForText:(id)arg0 parameters:(id)arg1 locations:(*id)arg2 ;
-(id)initWithBundle:(id)arg0 ;
-(id)textForBraille:(id)arg0 parameters:(id)arg1 locations:(*id)arg2 ;


@end


#endif