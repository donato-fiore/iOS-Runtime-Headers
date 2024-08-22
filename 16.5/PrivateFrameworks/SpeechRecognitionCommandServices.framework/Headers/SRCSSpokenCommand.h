// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRCSSPOKENCOMMAND_H
#define SRCSSPOKENCOMMAND_H

@class NSArray, NSMutableDictionary, NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SRCSCommandRecognizer.h"

@interface SRCSSpokenCommand : NSObject <NSCopying>

 {
    NSArray *_strings;
    NSMutableDictionary *_languageModelTree;
    id *_fstGrammar;
    SRCSCommandRecognizer *_commandRecognizer;
}


@property (readonly) NSString *identifier; // ivar: _identifier
@property (retain) NSDictionary *recognizedParameters; // ivar: _recognizedParameters
@property (readonly) NSArray *strings;


-(id)_initWithSpokenCommand:(id)arg0 ;
-(id)_uniqueCustomCommandIdentifier;
-(id)commandRecognizer;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fstGrammar;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithStrings:(id)arg0 ;
-(id)languageModelTree;
-(void)_replaceBuiltInIdentiferNodesWithSubTreesInMutableLM:(id)arg0 ;
-(void)setCommandRecognizer:(id)arg0 ;


@end


#endif