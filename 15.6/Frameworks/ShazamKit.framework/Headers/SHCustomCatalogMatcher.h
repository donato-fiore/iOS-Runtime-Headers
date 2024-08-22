// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHCUSTOMCATALOGMATCHER_H
#define SHCUSTOMCATALOGMATCHER_H

@class NSString;
@protocol SHMatcher, SHMatcherDelegate;

#import <Foundation/Foundation.h>

#import "SHCustomCatalog.h"
#import "MRE.h"

@interface SHCustomCatalogMatcher : NSObject <SHMatcher>



@property (retain, nonatomic) SHCustomCatalog *customCatalog; // ivar: _customCatalog
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SHMatcherDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MRE *mre; // ivar: _mre
@property (readonly) Class superclass;


-(NSInteger)storeDensityToMREDensity:(NSInteger)arg0 ;
-(id)MRESignaturesFromMatches:(id)arg0 ;
-(id)initWithCustomCatalog:(id)arg0 ;
-(id)mediaItemsFromTrackID:(NSUInteger)arg0 offset:(id)arg1 timeSkew:(id)arg2 frequencySkew:(id)arg3 score:(id)arg4 audioStartDate:(id)arg5 ;
-(void)buildMRE;
-(void)startRecognitionForRequest:(id)arg0 ;


@end


#endif