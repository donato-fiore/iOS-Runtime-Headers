// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSFORMAUTOFILLCORRECTIONSET_H
#define WBSFORMAUTOFILLCORRECTIONSET_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface WBSFormAutoFillCorrectionSet : NSObject

@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) NSDictionary *fingerprintsToClassifications; // ivar: _fingerprintsToClassifications
@property (readonly, nonatomic) NSDictionary *fingerprintsToCorrections; // ivar: _fingerprintsToCorrections


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDomain:(id)arg0 fingerprintsToClassifications:(id)arg1 ;
-(id)initWithDomain:(id)arg0 fingerprintsToCorrections:(id)arg1 ;


@end


#endif