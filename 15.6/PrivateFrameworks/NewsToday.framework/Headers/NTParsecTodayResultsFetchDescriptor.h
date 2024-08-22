// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPARSECTODAYRESULTSFETCHDESCRIPTOR_H
#define NTPARSECTODAYRESULTSFETCHDESCRIPTOR_H

@class NSString;
@protocol NTTodayResultsFetchDescriptor;

#import <Foundation/Foundation.h>


@interface NTParsecTodayResultsFetchDescriptor : NSObject <NTTodayResultsFetchDescriptor>



@property (readonly, nonatomic) Class descriptorsOperationClass;
@property (readonly, nonatomic) Class fetchOperationClass;
@property (readonly, copy, nonatomic) NSString *sourceIdentifier;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)placeholderSectionDescriptorsWithContentRequest:(id)arg0 ;


@end


#endif