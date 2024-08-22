// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRMEDIASUGGESTIONREQUEST_H
#define MRMEDIASUGGESTIONREQUEST_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MRMediaSuggestionRequest : NSObject <NSCopying>



@property (nonatomic) BOOL includeArtwork; // ivar: _includeArtwork
@property (nonatomic) NSUInteger maxResults; // ivar: _maxResults
@property (copy, nonatomic) NSUUID *requestIdentifier; // ivar: _requestIdentifier
@property (nonatomic) BOOL useDirectAccess; // ivar: _useDirectAccess


+(id)defaultRequest;
+(id)defaultRequestWithArtwork;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)performWithCompletion:(id)arg0 ;
-(void)performWithPreferences:(id)arg0 completion:(id)arg1 ;


@end


#endif