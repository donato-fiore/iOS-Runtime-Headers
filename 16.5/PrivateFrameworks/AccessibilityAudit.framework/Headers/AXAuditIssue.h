// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITISSUE_H
#define AXAUDITISSUE_H

@class NSString, NSNumber, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AXAuditElement.h"
#import "AXAuditIssueDescriptionManager.h"

@interface AXAuditIssue : NSObject <NSCopying>



@property (retain, nonatomic) AXAuditElement *auditElement; // ivar: _auditElement
@property (retain, nonatomic) NSString *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) CGPoint containerOrigin; // ivar: _containerOrigin
@property (retain, nonatomic) AXAuditIssueDescriptionManager *descManager; // ivar: _descManager
@property (retain, nonatomic) NSString *elementDescription; // ivar: _elementDescription
@property (nonatomic) CGRect elementRect; // ivar: _elementRect
@property (retain, nonatomic) NSString *elementText; // ivar: _elementText
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (retain, nonatomic) NSString *foregroundColor; // ivar: _foregroundColor
@property (retain, nonatomic) NSNumber *imageIdentifier; // ivar: _imageIdentifier
@property (nonatomic) NSInteger issueClassification; // ivar: _issueClassification
@property (retain, nonatomic) NSArray *longDescExtraInfo; // ivar: _longDescExtraInfo
@property (retain, nonatomic) NSString *mlGeneratedDescription; // ivar: _mlGeneratedDescription
@property (nonatomic) NSInteger platform; // ivar: _platform
@property (retain, nonatomic) NSArray *suggestedSelectorsToFix; // ivar: _suggestedSelectorsToFix
@property (copy, nonatomic) NSString *timeStamp; // ivar: _timeStamp


+(Class)_auditIssueClassForType:(NSInteger)arg0 ;
+(id)auditIssueForClassification:(NSInteger)arg0 ;
+(void)registerTransportableObjectWithManager:(id)arg0 ;
-(BOOL)_isSameRelativeLocationAsAuditIssue:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_platformForClassification:(NSInteger)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)foundLogMessage;
-(id)init;


@end


#endif