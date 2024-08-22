// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKCDADOCUMENTEXTRACTEDFIELDS_H
#define _HKCDADOCUMENTEXTRACTEDFIELDS_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface _HKCDADocumentExtractedFields : NSObject

@property (readonly, copy, nonatomic) NSString *extractedAuthorName; // ivar: _extractedAuthorName
@property (readonly, copy, nonatomic) NSString *extractedCustodianName; // ivar: _extractedCustodianName
@property (readonly, copy, nonatomic) NSDate *extractedDate; // ivar: _extractedDate
@property (readonly, copy, nonatomic) NSString *extractedPatient; // ivar: _extractedPatient
@property (readonly, copy, nonatomic) NSString *extractedTitle; // ivar: _extractedTitle


-(id)_firstFrom:(id)arg0 tagRule:(id)arg1 nilOnFail:(BOOL)arg2 ;
-(id)_parseCDADate:(id)arg0 ;
-(id)_personNameFrom:(id)arg0 familyTagRule:(id)arg1 givenTagRule:(id)arg2 nilOnFail:(BOOL)arg3 ;
-(id)initWithDocumentData:(id)arg0 ;
-(void)extractHeaderFieldsFromDocumentData:(id)arg0 ;


@end


#endif