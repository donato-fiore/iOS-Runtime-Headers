// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPNAMEDENTITYFILTER_H
#define PPNAMEDENTITYFILTER_H

@class MLModel;

#import <Foundation/Foundation.h>


@interface PPNamedEntityFilter : NSObject {
    MLModel *_model;
}




-(BOOL)isAcceptableRecord:(id)arg0 ;
-(id)filterNamedEntityRecords:(id)arg0 ;
-(id)filterScoredNamedEntities:(id)arg0 ;
-(id)init;
-(id)initWithModel:(id)arg0 ;


@end


#endif