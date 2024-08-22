// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCVANITYURLMAPPER_H
#define FCVANITYURLMAPPER_H

@class NTPBVanityURLMapping;

#import <Foundation/Foundation.h>


@interface FCVanityURLMapper : NSObject

@property (readonly, copy, nonatomic) NTPBVanityURLMapping *vanityURLMapping; // ivar: _vanityURLMapping


-(id)URLForVanityURL:(id)arg0 ;
-(id)_pathWithTrailingForwardSlashWithPath:(id)arg0 ;
-(id)_standardizedFragmentWithParameters:(id)arg0 fragment:(id)arg1 ;
-(id)_standardizedInputPathWithPath:(id)arg0 ;
-(id)_standardizedMappingPathWithPath:(id)arg0 ;
-(id)_standardizedQueryWithParameters:(id)arg0 query:(id)arg1 ;
-(id)init;
-(id)initWithVanityURLMapping:(id)arg0 ;
-(void)_setParametersIfNeededWithComponents:(id)arg0 parameters:(id)arg1 ;
-(void)_standardizeResultPath:(id)arg0 ;


@end


#endif