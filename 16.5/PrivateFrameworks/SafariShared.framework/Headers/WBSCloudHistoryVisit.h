// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCLOUDHISTORYVISIT_H
#define WBSCLOUDHISTORYVISIT_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WBSCloudHistoryVisit.h"
#import "WBSHistoryVisitIdentifier.h"

@interface WBSCloudHistoryVisit : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic, getter=wasHTTPNonGet) BOOL httpNonGet; // ivar: _httpNonGet
@property (nonatomic, getter=loadWasSuccessful) BOOL loadSuccessful; // ivar: _loadSuccessful
@property (weak, nonatomic) WBSCloudHistoryVisit *redirectDestinationVisit; // ivar: _redirectDestinationVisit
@property (copy, nonatomic) WBSHistoryVisitIdentifier *redirectDestinationVisitIdentifier; // ivar: _redirectDestinationVisitIdentifier
@property (weak, nonatomic) WBSCloudHistoryVisit *redirectSourceVisit; // ivar: _redirectSourceVisit
@property (copy, nonatomic) WBSHistoryVisitIdentifier *redirectSourceVisitIdentifier; // ivar: _redirectSourceVisitIdentifier
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) WBSHistoryVisitIdentifier *visitIdentifier; // ivar: _visitIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithHistoryVisit:(id)arg0 ;
-(id)initWithVisitIdentifier:(id)arg0 title:(id)arg1 loadSuccessful:(BOOL)arg2 httpNonGet:(BOOL)arg3 redirectSourceVisitIdentifier:(id)arg4 redirectDestinationVisitIdentifier:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif