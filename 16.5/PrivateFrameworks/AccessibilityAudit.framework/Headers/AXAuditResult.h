// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITRESULT_H
#define AXAUDITRESULT_H

@class NSDictionary, NSArray, NSString;
@protocol AXAuditTransportableObjectProtocol;

#import <Foundation/Foundation.h>


@interface AXAuditResult : NSObject <AXAuditTransportableObjectProtocol>



@property (retain, nonatomic) NSDictionary *auditIssueToScreenshotMapping; // ivar: _auditIssueToScreenshotMapping
@property (retain, nonatomic) NSArray *auditIssues; // ivar: _auditIssues
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerTransportableObjectWithManager:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)borderFrameForAuditIssue:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)displayBoundsForAuditIssue:(id)arg0 ;
-(id)initWithAXAuditCategoryResults:(id)arg0 ;
-(id)initWithAuditIssues:(id)arg0 ;
-(id)rotationForAuditIssue:(id)arg0 ;
-(id)scaleForAuditIssue:(id)arg0 ;
-(id)screenshotForAuditIssue:(id)arg0 ;
-(id)screenshotInfoDictionaryForAuditIssue:(id)arg0 ;
-(id)shouldFlipOutlineForAuditIssue:(id)arg0 ;
-(void)_generateIssueToImageMapping;


@end


#endif