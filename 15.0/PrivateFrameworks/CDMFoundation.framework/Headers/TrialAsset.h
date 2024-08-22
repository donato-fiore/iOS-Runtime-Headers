// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIALASSET_H
#define TRIALASSET_H

@class NSString, NSDictionary;
@protocol NLAsset;

#import <Foundation/Foundation.h>


@interface TrialAsset : NSObject <NLAsset>

 {
    NSString *_namespaceName;
    NSString *_factorName;
    NSString *_path;
    NSDictionary *_metadata;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)getAssetType;
-(id)getAssetLocale;
-(id)getAssetPath;
-(id)getAssetVersion;
-(id)getFactorName;
-(id)getNamespaceName;
-(id)initForFactor:(id)arg0 inNamespace:(id)arg1 withPath:(id)arg2 withMetadata:(id)arg3 ;
-(void)appendPathWithServiceAssetFolder:(id)arg0 ;


@end


#endif