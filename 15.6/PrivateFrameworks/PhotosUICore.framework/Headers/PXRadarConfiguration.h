// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXRADARCONFIGURATION_H
#define PXRADARCONFIGURATION_H

@class NSMutableArray, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXRadarConfiguration : NSObject <NSCopying>



@property (readonly, nonatomic) NSMutableArray *attachments; // ivar: _attachments
@property (nonatomic) BOOL attachmentsIncludeAnyUserAsset; // ivar: _attachmentsIncludeAnyUserAsset
@property (nonatomic) NSInteger classification; // ivar: _classification
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) NSInteger component; // ivar: _component
@property (copy, nonatomic) NSString *description; // ivar: _description
@property (readonly, nonatomic) NSMutableArray *diagnosticContainers; // ivar: _diagnosticContainers
@property (readonly, nonatomic) NSMutableArray *diagnosticProviders; // ivar: _diagnosticProviders
@property (copy, nonatomic) NSArray *keywordIDs; // ivar: _keywordIDs
@property (readonly, nonatomic) NSMutableArray *legacyTapToRadars; // ivar: _legacyTapToRadars
@property (readonly, nonatomic) NSMutableArray *screenshots; // ivar: _screenshots
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL wantsPhotosDiagnostics; // ivar: _wantsPhotosDiagnostics
@property (nonatomic) BOOL wantsSystemDiagnostics; // ivar: _wantsSystemDiagnostics


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)addAttachment:(id)arg0 ;
-(void)addDiagnosticProvider:(id)arg0 ;
-(void)addLegacyTapToRadar:(id)arg0 ;
-(void)addScreenshot:(id)arg0 ;
-(void)collectDiagnostics;


@end


#endif