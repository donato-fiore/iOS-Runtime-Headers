// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDDESCRIPTOR_H
#define AMDDESCRIPTOR_H

@class NSManagedObject, NSData, NSString;



@interface AMDDescriptor : NSManagedObject

@property (retain, nonatomic) NSData *descriptor;
@property (nonatomic) short domain;
@property (copy, nonatomic) NSString *featureName;


+(id)deleteAll:(*id)arg0 ;
+(id)fetchRequest;
+(id)getDescriptorsForDomain:(NSInteger)arg0 error:(*id)arg1 ;
+(id)refreshDescriptors:(id)arg0 forDomain:(NSInteger)arg1 error:(*id)arg2 ;


@end


#endif