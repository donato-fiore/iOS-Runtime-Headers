// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHCUSTOMCATALOGMATCHER_H
#define SHCUSTOMCATALOGMATCHER_H

@class NSString;
@protocol SHMatcher, SHMatcherDelegate;

#import <Foundation/Foundation.h>

#import "SHCustomCatalog.h"
#import "SHCustomCatalogMatcherResultBuilder.h"
#import "MRE.h"

@interface SHCustomCatalogMatcher : NSObject <SHMatcher>



@property (readonly, nonatomic) SHCustomCatalog *customCatalog; // ivar: _customCatalog
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SHMatcherDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SHCustomCatalogMatcherResultBuilder *matchResultBuilder; // ivar: _matchResultBuilder
@property (retain, nonatomic) MRE *mre; // ivar: _mre
@property (readonly) Class superclass;


-(BOOL)shouldTrackQuerySignature:(id)arg0 ;
-(NSInteger)algorithmToMREAlgorithm:(NSInteger)arg0 ;
-(NSInteger)storeDensityToMREDensity:(NSInteger)arg0 ;
-(id)MRESignaturesFromMatches:(id)arg0 ;
-(id)bestMatchFromMatchedResults:(id)arg0 ;
-(id)initWithCustomCatalog:(id)arg0 ;
-(id)stringIDFromTrackID:(NSUInteger)arg0 ;
-(void)buildMRE;
-(void)matchSignature:(id)arg0 ;
-(void)startRecognitionForRequest:(id)arg0 ;
-(void)stopRecognition;
-(void)stopRecognitionForRequestID:(id)arg0 ;


@end


#endif