// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRITREATMENTINFO_H
#define TRITREATMENTINFO_H

@class NSString;
@protocol TRIPaths;

#import <Foundation/Foundation.h>


@interface TRITreatmentInfo : NSObject {
    id<TRIPaths> *_paths;
}


@property (nonatomic) int deploymentId; // ivar: _deploymentId
@property (retain, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (retain, nonatomic) NSString *namespaceName; // ivar: _namespaceName
@property (retain, nonatomic) NSString *treatmentId; // ivar: _treatmentId


+(id)loadInfoForTreatment:(id)arg0 namespaceName:(id)arg1 paths:(id)arg2 ;
-(BOOL)load;
-(BOOL)loadFromUrl:(id)arg0 ;
-(BOOL)save;
-(BOOL)saveToDir:(id)arg0 ;
-(BOOL)saveToUrl:(id)arg0 ;
-(id)_treatmentBasePath;
-(id)baseUrlForTreatment:(id)arg0 namespaceName:(id)arg1 ;
-(id)baseUrlForTreatmentsWithNamespaceName:(id)arg0 ;
-(id)infoDictionary;
-(id)initWithPaths:(id)arg0 ;
-(id)treatmentDirectory;
-(id)url;
-(id)urlWithDir:(id)arg0 ;


@end


#endif