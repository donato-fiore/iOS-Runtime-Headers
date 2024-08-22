// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARPHONETICMATCHBUILDER_H
#define _EARPHONETICMATCHBUILDER_H


#import <Foundation/Foundation.h>


@interface _EARPhoneticMatchBuilder : NSObject

@property (readonly, nonatomic) shared_ptr<quasar::PMBuilder> pmBuilder; // ivar: _pmBuilder
@property (readonly, nonatomic) shared_ptr<quasar::TextTokenizer> tokenizer; // ivar: _tokenizer


+(BOOL)writePlaceholderFstToPath:(id)arg0 ;
+(BOOL)writePlaceholderSymbolsToPath:(id)arg0 ;
-(BOOL)buildAlignedLFst;
-(BOOL)buildGFsts;
-(BOOL)buildLFst;
-(BOOL)combineFsts;
-(BOOL)composeLGFsts;
-(BOOL)supportPhoneticMatchBuilding;
-(BOOL)writeAlignedLFstToPath:(id)arg0 ;
-(BOOL)writeGFstsToDirectory:(id)arg0 ;
-(BOOL)writeISymsToPath:(id)arg0 asText:(BOOL)arg1 ;
-(BOOL)writeIndividualLGFstsToDirectory:(id)arg0 ;
-(BOOL)writeLFstToPath:(id)arg0 ;
-(BOOL)writeLGFstToPath:(id)arg0 ;
-(BOOL)writeMetadataToPath:(id)arg0 ;
-(BOOL)writeOSymsToPath:(id)arg0 asText:(BOOL)arg1 quasarise:(BOOL)arg2 ;
-(id)initWithNcsRoot:(id)arg0 jsonConfigFile:(id)arg1 dataFeeds:(id)arg2 ;
-(id)initWithNcsRoot:(id)arg0 jsonConfigFile:(id)arg1 dataFeedsFile:(id)arg2 ;
-(id)lFstName;
-(id)lgFstName;
-(id)osymsName;
-(void)reset;


@end


#endif