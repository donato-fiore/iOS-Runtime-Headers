// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAUTOFILLONETIMECODE_H
#define SFAUTOFILLONETIMECODE_H

@class NSDate, NSString, NSURL, NSArray, WBSTOTPGenerator;

#import <Foundation/Foundation.h>


@interface SFAutoFillOneTimeCode : NSObject {
    NSDate *_timestamp;
    NSString *_detectedCode;
}


@property (readonly, copy, nonatomic) NSString *GUID; // ivar: _GUID
@property (readonly, copy, nonatomic) NSURL *_domainBoundEmbeddedURL;
@property (readonly, copy, nonatomic) NSURL *_domainBoundTopLevelURL;
@property (readonly, copy, nonatomic) NSString *code;
@property (readonly, copy, nonatomic) NSString *detectedCode;
@property (readonly, copy, nonatomic) NSString *displayCode; // ivar: _displayCode
@property (readonly, copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) BOOL domainStrictMatch; // ivar: _domainStrictMatch
@property (readonly, copy, nonatomic) NSString *embeddedDomain; // ivar: _embeddedDomain
@property (readonly, copy, nonatomic) NSArray *embeddedDomains; // ivar: _embeddedDomains
@property (readonly, copy, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, copy, nonatomic) NSString *machineReadableCode; // ivar: _machineReadableCode
@property (readonly, nonatomic) NSInteger source; // ivar: _source
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) WBSTOTPGenerator *totpGenerator; // ivar: _totpGenerator
@property (readonly, copy, nonatomic) NSString *user; // ivar: _user


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_matchBoundDomainAndEmbeddedDomainWithFrameURLs:(id)arg0 ;
-(NSInteger)_matchBoundDomainAndEmbeddedDomainsWithFrameURLs:(id)arg0 ;
-(NSInteger)_matchURL:(id)arg0 withBoundDomainURL:(id)arg1 strict:(BOOL)arg2 ;
-(NSInteger)matchBoundDomainsWithFrameURLs:(id)arg0 ;
-(NSInteger)matchDomainWithURL:(id)arg0 ;
-(NSUInteger)hash;
-(id)_embeddedDomainArrayFromIMCoreEmbeddedDomains:(id)arg0 ;
-(id)_secureURLForDomain:(id)arg0 ;
-(id)_stringForSource:(NSInteger)arg0 ;
-(id)description;
-(id)initWithIMCoreDictionary:(id)arg0 ;
-(id)initWithTOTPGenerator:(id)arg0 user:(id)arg1 highLevelDomain:(id)arg2 ;
-(id)localizedSubtitleForContext:(NSInteger)arg0 ;
-(id)localizedTitleForContext:(NSInteger)arg0 ;


@end


#endif