// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHPRESENTATIONDATESPECIFIER_H
#define BLSHPRESENTATIONDATESPECIFIER_H

@class NSString, NSDate, NSArray;
@protocol BLSPresentationDateSpecifying;

#import <Foundation/Foundation.h>


@interface BLSHPresentationDateSpecifier : NSObject <BLSPresentationDateSpecifying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *presentationDate; // ivar: _presentationDate
@property (readonly, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (readonly) Class superclass;


+(id)specifierWithPresentationDate:(id)arg0 specifiers:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)bls_loggingString;
-(id)bls_shortLoggingString;
-(id)dateSpecifierForEnvironment:(id)arg0 ;
-(id)initWithPresentationDate:(id)arg0 specifiers:(id)arg1 ;
-(void)enumerateDateSpecifiersUsingBlock:(id)arg0 ;


@end


#endif