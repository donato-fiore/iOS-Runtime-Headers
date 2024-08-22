// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNDFDONATIONSTRINGCOLLECTOR_H
#define CNDFDONATIONSTRINGCOLLECTOR_H

@class NSString, NSArray, NSMutableArray;
@protocol CNDonationValueVisitor;

#import <Foundation/Foundation.h>


@interface CNDFDonationStringCollector : NSObject <CNDonationValueVisitor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *strings;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableArray *visitedStrings; // ivar: _visitedStrings


-(id)init;
-(void)_addNonEmptyString:(id)arg0 ;
-(void)collectStringsFromDonation:(id)arg0 ;
-(void)visitDonationValue:(id)arg0 emailAddress:(id)arg1 label:(id)arg2 ;
-(void)visitDonationValue:(id)arg0 imageData:(id)arg1 ;
-(void)visitDonationValue:(id)arg0 nameComponents:(id)arg1 ;
-(void)visitDonationValue:(id)arg0 phoneNumber:(id)arg1 label:(id)arg2 ;
-(void)visitDonationValue:(id)arg0 postalAddress:(id)arg1 style:(NSInteger)arg2 label:(id)arg3 ;


@end


#endif