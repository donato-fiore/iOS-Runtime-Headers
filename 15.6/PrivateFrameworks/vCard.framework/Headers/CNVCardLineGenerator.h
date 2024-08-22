// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVCARDLINEGENERATOR_H
#define CNVCARDLINEGENERATOR_H

@class NSString;
@protocol CNVCardLineFactory;

#import <Foundation/Foundation.h>


@interface CNVCardLineGenerator : NSObject {
    NSString *_lineName;
    *NSInteger _groupingCount;
    id<CNVCardLineFactory> *_lineFactory;
}




+(id)activityAlertGeneratorWithName:(id)arg0 groupingCount:(*NSInteger)arg1 ;
+(id)alternateDateComponentsGeneratorWithName:(id)arg0 groupingcount:(*NSInteger)arg1 ;
+(id)dateComponentsGeneratorWithName:(id)arg0 groupingCount:(*NSInteger)arg1 ;
+(id)emailGeneratorWithName:(id)arg0 groupingCount:(*NSInteger)arg1 ;
+(id)generatorWithName:(id)arg0 groupingCount:(*NSInteger)arg1 ;
+(id)instantMessagingGeneratorWithName:(id)arg0 groupingCount:(*NSInteger)arg1 ;
+(id)legacyInstantMessagingGeneratorWithName:(id)arg0 groupingCount:(*NSInteger)arg1 ;
+(id)phoneGeneratorWithName:(id)arg0 groupingCount:(*NSInteger)arg1 ;
+(id)socialProfileGeneratorWithName:(id)arg0 groupingCount:(*NSInteger)arg1 ;
+(id)streetAddressGeneratorWithName:(id)arg0 groupingCount:(*NSInteger)arg1 ;
-(id)initWithName:(id)arg0 groupingCount:(*NSInteger)arg1 ;
-(id)lineWithValue:(id)arg0 label:(id)arg1 ;
-(id)makeLineWithName:(id)arg0 value:(id)arg1 ;
-(id)standardLabelsForLabel:(id)arg0 ;
-(void)addCustomLabel:(id)arg0 toLine:(id)arg1 ;
-(void)addPrimaryValueMarkerToLine:(id)arg0 ;
-(void)addStandardLabel:(id)arg0 toLine:(id)arg1 ;


@end


#endif