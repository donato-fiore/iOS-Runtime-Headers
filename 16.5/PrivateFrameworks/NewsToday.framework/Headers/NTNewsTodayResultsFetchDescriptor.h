// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTNEWSTODAYRESULTSFETCHDESCRIPTOR_H
#define NTNEWSTODAYRESULTSFETCHDESCRIPTOR_H

@class NSString;
@protocol NTTodayResultsFetchDescriptor;

#import <Foundation/Foundation.h>


@interface NTNewsTodayResultsFetchDescriptor : NSObject <NTTodayResultsFetchDescriptor>



@property (readonly, nonatomic) Class descriptorsOperationClass;
@property (readonly, nonatomic) Class fetchOperationClass;
@property (readonly, copy, nonatomic) NSString *sourceIdentifier;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)placeholderSectionDescriptorsWithContentRequest:(id)arg0 ;


@end


#endif