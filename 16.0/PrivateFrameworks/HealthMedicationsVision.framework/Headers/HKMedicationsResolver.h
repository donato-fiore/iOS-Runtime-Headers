// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATIONSRESOLVER_H
#define HKMEDICATIONSRESOLVER_H

@class HDSQLiteDatabase, NSURL, NSDictionary;

#import <Foundation/Foundation.h>

#import "HKMedicationsNumberToStringMap.h"

@interface HKMedicationsResolver : NSObject {
    HDSQLiteDatabase *_db;
    NSURL *_assetUrl;
    BOOL _dbReady;
    NSInteger _numberOfNewNgrams;
    NSInteger _numberOfUsedNgrams;
    HKMedicationsNumberToStringMap *_ingredients;
    HKMedicationsNumberToStringMap *_tradenames;
    NSDictionary *_abbreviations;
}




-(BOOL)hkt_looksLikeGenericInText:(id)arg0 ;
-(BOOL)hkt_prepareNgramAssetWithError:(*id)arg0 ;
-(BOOL)hkt_setUpDatabase;
-(BOOL)resetInMemoryDBWithError:(*id)arg0 ;
-(BOOL)resetResolverWithError:(*id)arg0 ;
-(NSInteger)consecutiveLCSUsingTranscript:(id)arg0 prediction:(id)arg1 ;
-(NSInteger)countOfContinousDigitsInLine:(id)arg0 ;
-(NSInteger)hkt_ngramIdCountWithError:(*id)arg0 ;
-(id)filterAndAddGenerics:(id)arg0 transcripts:(id)arg1 criterion:(float)arg2 limit:(NSInteger)arg3 error:(*id)arg4 ;
-(id)hkt_createNgramMapsWithError:(*id)arg0 ;
-(id)hkt_ngramsFrom:(id)arg0 minLength:(NSInteger)arg1 maxLength:(NSInteger)arg2 ;
-(id)hkt_ngramsWithError:(*id)arg0 ;
-(id)initWithAssetUrl:(id)arg0 ;
-(id)resolveText:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)processNgramLine:(id)arg0 n:(NSInteger)arg1 ;


@end


#endif