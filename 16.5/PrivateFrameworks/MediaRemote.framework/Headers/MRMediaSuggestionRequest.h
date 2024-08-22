// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRMEDIASUGGESTIONREQUEST_H
#define MRMEDIASUGGESTIONREQUEST_H

@class NSString, NSUUID;
@protocol MRMediaSuggestionRequestConfigurable, NSCopying;

#import <Foundation/Foundation.h>


@interface MRMediaSuggestionRequest : NSObject <MRMediaSuggestionRequestConfigurable, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeArtwork; // ivar: _includeArtwork
@property (nonatomic) NSUInteger maxResults; // ivar: _maxResults
@property (copy, nonatomic) NSUUID *requestIdentifier; // ivar: _requestIdentifier
@property (readonly) Class superclass;
@property (nonatomic) BOOL useDirectAccess; // ivar: _useDirectAccess


+(id)defaultRequest;
+(id)defaultRequestWithArtwork;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(void)performWithCompletion:(id)arg0 ;
-(void)performWithPreferences:(id)arg0 completion:(id)arg1 ;
-(void)performWithPreferences:(id)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif