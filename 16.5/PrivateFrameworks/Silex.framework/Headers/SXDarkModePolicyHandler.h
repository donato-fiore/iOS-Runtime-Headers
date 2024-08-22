// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDARKMODEPOLICYHANDLER_H
#define SXDARKMODEPOLICYHANDLER_H

@class NSString, NSMutableArray;
@protocol SXDarkModePolicyHandler, SXDarkModeConfiguration, SXDocumentProviding;

#import <Foundation/Foundation.h>


@interface SXDarkModePolicyHandler : NSObject <SXDarkModePolicyHandler>



@property (readonly, nonatomic) NSObject<SXDarkModeConfiguration> *darkModeConfiguration; // ivar: _darkModeConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXDocumentProviding> *documentProvider; // ivar: _documentProvider
@property (readonly, nonatomic) NSMutableArray *exceptions; // ivar: _exceptions
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldApplyDarkModeToBackgroundColorsOfComponentTextStyle:(id)arg0 component:(id)arg1 DOM:(id)arg2 ;
-(BOOL)shouldApplyDarkModeToBackgroundColorsOfTextStyle:(id)arg0 component:(id)arg1 DOM:(id)arg2 ;
-(BOOL)shouldApplyDarkModeToComponent:(id)arg0 DOM:(id)arg1 ;
-(BOOL)shouldApplyDarkModeToComponentStyle:(id)arg0 component:(id)arg1 DOM:(id)arg2 ;
-(BOOL)shouldApplyDarkModeToComponentStylesForComponent:(id)arg0 DOM:(id)arg1 ;
-(BOOL)shouldApplyDarkModeToDOM:(id)arg0 layoutOptions:(id)arg1 ;
-(BOOL)shouldApplyDarkModeToDocumentStyle:(id)arg0 DOM:(id)arg1 layoutOptions:(id)arg2 ;
-(BOOL)shouldApplyDarkModeToForegroundColorsOfComponentTextStyle:(id)arg0 component:(id)arg1 DOM:(id)arg2 ;
-(BOOL)shouldApplyDarkModeToForegroundColorsOfTextStyle:(id)arg0 component:(id)arg1 DOM:(id)arg2 ;
-(BOOL)shouldApplyDarkModeToTextStyleBackgroundColorsForComponent:(id)arg0 DOM:(id)arg1 ;
-(BOOL)shouldApplyDarkModeToTextStyleForegroundColorsForComponent:(id)arg0 DOM:(id)arg1 ;
-(id)initWithDocumentProvider:(id)arg0 darkModeConfiguration:(id)arg1 ;
-(void)addPolicyException:(id)arg0 ;


@end


#endif