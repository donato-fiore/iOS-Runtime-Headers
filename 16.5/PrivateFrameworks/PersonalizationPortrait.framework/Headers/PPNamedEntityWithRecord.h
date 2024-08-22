// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPNAMEDENTITYWITHRECORD_H
#define PPNAMEDENTITYWITHRECORD_H



#import "PPNamedEntity.h"
#import "PPNamedEntityRecord.h"

@interface PPNamedEntityWithRecord : PPNamedEntity {
    PPNamedEntityRecord *_mostRelevantRecord;
}




-(CGFloat)sentimentScore;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 category:(NSUInteger)arg1 dynamicCategory:(id)arg2 language:(id)arg3 mostRelevantRecord:(id)arg4 ;
-(id)mostRelevantRecord;


@end


#endif