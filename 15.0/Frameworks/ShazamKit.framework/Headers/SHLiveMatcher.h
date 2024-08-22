// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHLIVEMATCHER_H
#define SHLIVEMATCHER_H

@class NSString;
@protocol SHCustomCatalogDelegate, SHMatcher, SHMatcherDelegate;

#import <Foundation/Foundation.h>

#import "SHCustomCatalog.h"
#import "SHCustomCatalogMatcher.h"
#import "SHMutableSignature.h"

@interface SHLiveMatcher : NSObject <SHCustomCatalogDelegate, SHMatcher>



@property (retain, nonatomic) SHCustomCatalog *customCatalog; // ivar: _customCatalog
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SHMatcherDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SHCustomCatalogMatcher *mreMatcher; // ivar: _mreMatcher
@property (retain, nonatomic) SHMutableSignature *rollingSignature; // ivar: _rollingSignature
@property (readonly) Class superclass;


-(id)buildRollingSignature;
-(id)duplicateCustomCatalog:(id)arg0 error:(*id)arg1 ;
-(id)initWithCustomCatalog:(id)arg0 ;
-(void)_bufferProduced:(id)arg0 atTime:(id)arg1 ;
-(void)buildMREForReferenceSignatures:(id)arg0 ;
-(void)startRecognitionForRequest:(id)arg0 ;


@end


#endif