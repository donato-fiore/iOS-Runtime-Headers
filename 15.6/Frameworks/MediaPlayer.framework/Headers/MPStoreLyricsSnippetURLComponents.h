// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSTORELYRICSSNIPPETURLCOMPONENTS_H
#define MPSTORELYRICSSNIPPETURLCOMPONENTS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MPStoreLyricsSnippetURLComponents : NSObject

@property (readonly, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, nonatomic) CGFloat endTime; // ivar: _endTime
@property (readonly, nonatomic) NSString *language; // ivar: _language
@property (readonly, nonatomic) NSString *signature; // ivar: _signature
@property (readonly, nonatomic) NSInteger songAdamID; // ivar: _songAdamID
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime


-(id)initWithSong:(id)arg0 language:(id)arg1 startTime:(CGFloat)arg2 endTime:(CGFloat)arg3 ;
-(id)initWithURL:(id)arg0 ;
-(id)signatureWithCountryCode:(id)arg0 adamID:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 language:(id)arg4 ;
-(void)URLWithAdditionalParameters:(id)arg0 completion:(id)arg1 ;


@end


#endif