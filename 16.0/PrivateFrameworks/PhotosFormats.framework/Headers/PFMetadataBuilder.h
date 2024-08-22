// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFMETADATABUILDER_H
#define PFMETADATABUILDER_H

@class NSString, NSDate, NSTimeZone, NSArray, CLLocation;
@protocol PFMetadataBuilder;

#import <Foundation/Foundation.h>


@interface PFMetadataBuilder : NSObject <PFMetadataBuilder>



@property (copy, nonatomic) NSString *accessibilityDescription; // ivar: _accessibilityDescription
@property (copy, nonatomic) NSString *caption; // ivar: _caption
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSTimeZone *creationTimeZone; // ivar: _creationTimeZone
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *keywords; // ivar: _keywords
@property (copy, nonatomic) CLLocation *location; // ivar: _location
@property (copy, nonatomic) NSArray *peopleNames; // ivar: _peopleNames
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)combinedKeywordsAndPeople;
-(id)init;


@end


#endif